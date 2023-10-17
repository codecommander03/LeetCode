https://leetcode.com/problems/regular-expression-matching/

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(),n=p.size();
        vector<vector<bool>> dp(m+1,vector<bool>(n+1,false));
        dp[0][0]=true;
        for(int i=0;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(p[j-1]=='*'){
                    // dp[i][j-2] for no repetition i.e., * is only 1 consecutively
                    //(i && dp[i-1][j] && (s[i-1]==p[j-2] || p[j-2]=='.') ) when there is repetition
                    dp[i][j] = dp[i][j-2] || (i && dp[i-1][j] && (s[i-1]==p[j-2] || p[j-2]=='.') ); 
                }
                else {
                    // if previous strings are same then only the remaining string will be same dp[i-1][j-1]checks this and i verifies i>0 
                    dp[i][j] = i && dp[i-1][j-1] && (s[i-1]==p[j-1] || p[j-1]=='.');
                }
            }
        }
        return dp[m][n];
    }
};
