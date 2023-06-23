class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return n;
        int ans = 2;
        vector< unordered_map<int,int> > dp(n);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int diff = nums[j] - nums[i];
                dp[j][diff] = max(2,dp[i][diff]+1);
                ans = max(ans,dp[j][diff]);
            }
        }
        return ans;
    }
};
