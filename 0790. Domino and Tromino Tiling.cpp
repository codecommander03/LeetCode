class Solution {
public:
    int mod = 1e9+7;
    int numTilings(int n) {
        vector<int> dp(1001);
        for(int i=0;i<=2;i++) dp[i]=i;
        dp[3] = 5;
        for(int i=4;i<=n;i++){
            dp[i] = ((2*dp[i-1])%mod + (dp[i-3])%mod)%mod;
        }
        return dp[n];
    }
};
