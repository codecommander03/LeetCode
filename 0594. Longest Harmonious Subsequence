class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = 0;
        for(int i:nums) m[i]++;
        for(auto &[a,b]: m){
            if(m.count(a+1)) ans = max(ans,b+m[a+1]);
        }
        return ans;
    }
};
