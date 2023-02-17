https://leetcode.com/problems/last-stone-weight/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(auto i: stones){
            p.push(i);
        }
        while(p.size()>=2){
            int x=0,y=0;
            if(!p.empty()){
                x = p.top();
                p.pop();
            }
            if(p.empty()) return x;
            else{
                y = p.top();
                p.pop();
            }
            if(x==y) continue;
            else p.push(abs(x-y));
        }
        if(p.size()==1) return p.top();
        else return 0;
    }
};
