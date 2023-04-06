class Solution {
public:
    bool valid(int i,int j,int m,int n){
        return (i>=0 && i<m && j>=0 && j<n);
    }
    void dfs(vector<vector<int>>& grid,vector<vector<bool>> &vis,int i,int j,int m,int n){
        if(grid[i][j]==1) return;
        vis[i][j]=true;
        int x[]={-1,1,0,0};
        int y[]={0,0,-1,1};
        for(int k=0;k<4;k++){
            int X = i + x[k];
            int Y = j + y[k];
            if(valid(X,Y,m,n)&&!vis[X][Y] &&grid[X][Y]==0){
                dfs(grid,vis,X,Y,m,n);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size(),n=grid[0].size();

        vector<vector<bool>> vis(m,vector<bool>(n,false));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1)&& !vis[i][j]){
                    dfs(grid,vis,i,j,m,n);
                }
                if(grid[i][j]==1){
                    vis[i][j]=true;
                }
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==false){
                    dfs(grid,vis,i,j,m,n);
                    ans++;
                }
            }
        }
        return ans;
        
    }
};
