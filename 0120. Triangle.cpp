class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp = triangle;
        int mini = INT_MAX;
        int n = triangle.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                if(i==0) dp[0][0]=triangle[0][0];
                else{
                    if(j==0){
                        dp[i][j]=triangle[i][j]+dp[i-1][j];
                    }
                    else if(j==i){
                        dp[i][j]=triangle[i][j]+dp[i-1][j-1];
                    }
                    else{
                        dp[i][j]=triangle[i][j] + min(dp[i-1][j],dp[i-1][j-1]);
                    }
                }
            }

        }
        for(int i=0;i<n;i++){
            mini = min(mini,dp[n-1][i]);
        }
        return mini;
    }
};
