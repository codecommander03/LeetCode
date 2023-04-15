class Solution {
public:
    int n;
    int solve(vector<vector<int>>& piles, vector<vector<int>>& dp,int k,int i){
        if (dp[i][k] > 0) return dp[i][k];
        if (k == 0 || i == n) return 0;
        int ans = solve(piles,dp,k,i+1), sum = 0;
        for (int j = 0; j<piles[i].size() && j<k; ++j) {
            sum += piles[i][j];
            ans = max(ans, solve(piles, dp,k - j - 1,i + 1) + sum);
        }
        return dp[i][k] = ans;
    }

    int maxValueOfCoins(vector<vector<int>>& piles, int K) {
        n = piles.size();
        vector<vector<int>> dp(n + 1, vector<int>(K + 1, 0));
        return solve(piles, dp,K,0);
    }
};
