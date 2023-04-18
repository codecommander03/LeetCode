class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int N = strs.size();
        vector<vector<vector<int>>> dp(N+1,vector<vector<int>>(m+1,vector<int>(n+1,0)));
        for(int k=N-1;k>=0;k--){
            for(int i=0;i<=m;i++){
                for(int j=0;j<=n;j++){
                    int no = dp[k+1][i][j];

                    int one=0,zero=0;
                    for(char c: strs[k]){
                        if(c=='0') zero++;
                        else one++;
                    }
                    int yes=0;
                    if(i>=zero && j>=one){
                        yes = dp[k+1][i-zero][j-one]+1;
                    }
                    dp[k][i][j] = max(dp[k][i][j],max(yes,no));
                }
            }
        }
        return dp[0][m][n];
    }
};
