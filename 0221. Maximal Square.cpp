class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        if(m==0 || n==0) return 0;
        vector<vector<int>> dp(m,vector<int>(n,0));
        int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0) && matrix[i][j]=='1'){
                    dp[i][j]=1;
                    ans=max(ans,1);
                    continue;
                }
                if(matrix[i][j]=='1'){
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
                    ans=max(ans,dp[i][j]);
                }
            }
        }
        return ans*ans;
    }
};
