class Solution {
public:
    vector<vector<int>> dp;
    int minDistance(string word1, string word2) {
        int m=word1.size(),n=word2.size();
        if(m==0) return n;
        if(n==0) return m;
        vector<vector<int>> dp(m+1,vector<int>(n+1,100));

        for(int j=0;j<=n;j++){
            dp[0][j] = j;
        }
        for(int i=1;i<=m;i++){
            dp[i][0] = i;
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                
                if(word1[i-1]==word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                }
            }
        }
        return dp[m][n];
    }
};
