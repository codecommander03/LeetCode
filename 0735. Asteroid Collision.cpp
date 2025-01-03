class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> sol;
        for(int i: asteroids){
            if(sol.size()==0) sol.emplace_back(i);
            else{
                int x = *sol.rbegin();
                if((x>0 && i>0) || (x<0 && i<0) || (x<0 && i>0)){
                    //sol.push_back(x);
                    sol.push_back(i);
                    continue;
                }
                while((x>0 && i<0) && (sol.size()>1) && (abs(x)<abs(i)) ){
                    sol.pop_back();
                    x = *sol.rbegin();
                    // sol.pop_back();
                }
                if(x+i==0) sol.pop_back();
                //else if(i==x) sol.emplace_back(i);
                else if((x>0 && i>0) || (x<0 && i<0)) sol.emplace_back(i);
                else if(abs(x)<abs(i)) sol[sol.size()-1]=i;
                
            }
        }
        return sol;
    }
};
