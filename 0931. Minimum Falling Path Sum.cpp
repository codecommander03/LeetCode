class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int ans=INT_MAX;
        vector<vector<int>> dp(n,vector<int>(n,100));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0) dp[0][j]=matrix[0][j];
                else{
                    int mini=dp[i-1][j];
                    if(j+1<n){
                        mini=min(mini,dp[i-1][j+1]);
                    }
                    if(j-1>=0){
                        mini=min(mini,dp[i-1][j-1]);
                    }
                    dp[i][j]=matrix[i][j]+mini;
                }
                if(i==n-1){
                    ans=min(ans,dp[n-1][j]);
                }
            }
        }
        return ans;
    }
};
