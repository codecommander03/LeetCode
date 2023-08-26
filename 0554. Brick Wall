class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int width = 0;
        int n = wall.size();
        for(int j=0;j<wall[0].size();j++){
            width += wall[0][j];
        }
        //if(width==1) return n;
        //vector<int> v(width+1,n);
        unordered_map<int,int> m;

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j: wall[i]){
                sum += j;
                if(m.count(sum)) m[sum]--;
                else m[sum] = n-1;
            }
        }
        if(m.size()==1) return n;
        int ans = 1e9;
        for(auto i: m){
            if(i.first != width) ans = min(ans,i.second);
        }
        return ans;
    }
};
