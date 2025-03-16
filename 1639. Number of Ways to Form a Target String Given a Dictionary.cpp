class Solution {
public:
    int numWays(vector<string>& words, string target) {
        int n = words[0].size();
        int m = target.size();
        int mod = 1e9+7;
        vector<int> res(m+1, 0);
        res[0] = 1;
        
        vector<vector<int>> dp(n,vector<int>(26, 0));
        for (string& s : words) {
            for (int i = 0; i < n; i++) {
                dp[i][s[i] - 'a']++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = m-1; j >= 0; j--) {
                res[j+1] += (int)((long)res[j]*dp[i][target[j]-'a'] % mod);
                res[j+1] %= mod;
            }
        }
        
        return res[m];
    }
};
