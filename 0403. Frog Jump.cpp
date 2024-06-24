class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        vector<vector<int>> dp(n,vector<int>(n+1));

        if(stones[1] == 1) dp[1][1] = 1;

        for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff = stones[j] - stones[i];
                if(diff<=j) dp[j][diff] = dp[i][diff-1] || dp[i][diff] || dp[i][diff+1];
            }
        }
        return accumulate(dp[n-1].begin(),dp[n-1].end(),0) > 0;
    }
};
