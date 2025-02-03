class Solution {
public:
    int helper(vector<vector<vector<int>>> &dp,int m,int n,vector<vector<int>> &sum,int r,int c,int k){
        if(sum[r][c]==0) return 0;
        if(k==0) return 1;
        if(dp[r][c][k]!=-1) return dp[r][c][k];

        int res = 0;

        for(int R=r+1;R<m;R++){
            if(sum[r][c] > sum[R][c]){
                res = (res+helper(dp,m,n,sum,R,c,k-1))%int(1e9 + 7);
            }
        }
        for(int C=c+1;C<n;C++){
            if(sum[r][c] > sum[r][C]){
                res = (res+helper(dp,m,n,sum,r,C,k-1))%int(1e9 + 7);
            }
        }
        return dp[r][c][k] = res;
    }
    int ways(vector<string>& pizza, int k) {
        int m = pizza.size(), n = pizza[0].size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(k,-1)));
        vector<vector<int>> sum(m+1,vector<int>(n+1,0));

        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                sum[i][j] = sum[i+1][j] + sum[i][j+1] - sum[i+1][j+1];
                if(pizza[i][j]=='A') sum[i][j]++;
            }
        }

        return helper(dp,m,n,sum,0,0,k-1);
    }
};
