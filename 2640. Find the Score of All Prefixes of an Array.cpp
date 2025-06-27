class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        int maxn=nums[0];
        vector<long long> ans(n);
        ans[0]=(long long)maxn+nums[0];

        for(int i=1;i<n;i++){
            maxn=max(maxn,nums[i]);
            ans[i] = ans[i-1] + nums[i] + maxn;
        }
        return ans;
        
    }
};
