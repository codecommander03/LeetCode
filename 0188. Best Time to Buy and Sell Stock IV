class Solution {
public:
    int n;
    int solve(int i,vector<int> &v,int k,vector<vector<int>> &dp){
        if(i>=n||k<=0)return 0;
        if(dp[i][k] != -1)return dp[i][k];
        int ans = solve(i+1,v,k,dp);
        if(!(k%2)) ans = max(ans,-v[i]+solve(i+1,v,k-1,dp));
        else ans = max(ans,v[i]+solve(i+1,v,k-1,dp));
        return dp[i][k] = ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        n = prices.size();
        k*=2;
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        return solve(0,prices,k,dp);
    }
};
