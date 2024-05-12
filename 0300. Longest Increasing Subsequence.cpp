class Solution {
public:
    int n;
    vector<vector<int>> dp;
    int help(int ind,int prev,vector<int>&nums){
        if(ind==n) return 0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        int ans = help(ind+1,prev,nums);
        if(prev==-1 || nums[prev]<nums[ind]) ans = max(ans,1+help(ind+1,ind,nums));
        return dp[ind][prev+1] = ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        dp.resize(n,vector<int>(n+1,-1));
        return help(0,-1,nums);
    }
};
