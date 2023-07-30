class Solution {
public:
    double dp[105][30][30];
    int X[8] = {2,2,-2,-2,1,-1,1,-1};
    int Y[8] = {1,-1,1,-1,2,2,-2,-2};
    double dfs(int x,int y,int n,int k){
        if(x<0 || y<0 || x>=n || y>=n) return 0;
        if(k==0) return 1;
        if(dp[k][x][y] != 0) return dp[k][x][y];
        double ans = 0;
        for(int i=0;i<8;i++){
            int newx = x+X[i],newy = y+Y[i];
            ans += dfs(newx,newy,n,k-1);
        }
        return dp[k][x][y] = (ans/8.0);
    }
    double knightProbability(int n, int k, int row, int column) {
        memset(dp,0,sizeof(dp));
        return dfs(row,column,n,k);
    }
};
