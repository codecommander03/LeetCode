class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(!n) return 1;
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 10;
        int curr = 9;
        int t = 9;
        for(int i=2;i<=n;i++){
            curr *= t;
            dp[i] = dp[i-1] + curr;
            t--;
        }
        return dp[n];
    }
};
