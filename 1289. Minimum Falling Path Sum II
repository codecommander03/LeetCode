class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {

        int n = grid.size();

        vector<vector<int>> dp(n , vector<int>(n,INT_MAX));
        
        for(int i=0 ; i<n ; i++) dp[n-1][i] = grid[n-1][i];

        for(int i=n-2 ; i>=0 ; i--){
            for(int j=0 ; j<n ; j++){
                for(int k=0 ; k<n ; k++){
                    if(k!=j){
                        dp[i][j] = min(dp[i][j] , dp[i+1][k]+grid[i][j]);
                    }
                }
            }
        }
        return *min_element(dp[0].begin() , dp[0].end());
    }
};
