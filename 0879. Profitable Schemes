class Solution {
public:
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        int mod = 1e9+7;
        vector<vector<int>> dp(minProfit+1,vector<int>(n+1,0));
        dp[0][0] = 1;
        for(int k=0;k<group.size();k++){
            int g=group[k],p=profit[k];
            for(int i=minProfit;i>=0;i--){
                for(int j=n-g;j>=0;j--){
                    int new_profit = min(i + p,minProfit);
                    dp[new_profit][j+g] = (dp[new_profit][j+g]+dp[i][j])%mod;

                }
            }
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            ans = (ans+dp[minProfit][i])%mod;
        }
        return ans;
    }
};
