class Solution {
public:
    int dp[100005];
    int n;
    bool help(int ind,vector<int>&nums){
        if(ind>=n) return true;
        if(dp[ind]!=-1) return dp[ind];
        int ans = 0;
        if(ind<=n-2 && nums[ind]==nums[ind+1]) if(help(ind+2,nums)) return dp[ind]=true;
        if(ind<=n-3 && nums[ind]==nums[ind+1] && nums[ind+1]==nums[ind+2]) if(help(ind+3,nums)) return dp[ind] = true;
        if(ind<=n-3 && nums[ind]+1==nums[ind+1] && nums[ind+1]+1==nums[ind+2]) if(help(ind+3,nums)) return dp[ind] = true;
        return dp[ind] = false;
    }
    bool validPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        n = nums.size();
        return help(0,nums);
    }
};
