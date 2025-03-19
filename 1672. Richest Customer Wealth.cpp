class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        for(auto v: accounts){
            int sum=0;
            for(int i: v) sum+=i;
            wealth=max(wealth,sum);
        }
        return wealth;
    }
};
