class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int m,int n,int &count){
        if(i<0 || j<0 || i>=m || j>=n) return;
        if(grid[i][j]==0) return;
        count++;
        grid[i][j]=0;
        dfs(grid,i-1,j,m,n,count);
        dfs(grid,i+1,j,m,n,count);
        dfs(grid,i,j-1,m,n,count);
        dfs(grid,i,j+1,m,n,count);

    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=0;
        int temp=0;
        for(int i=0;i<n;i++){
            if(grid[0][i]==1){
                dfs(grid,0,i,m,n,temp);
            }
            if(grid[m-1][i]==1){
                dfs(grid,m-1,i,m,n,temp);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[i][0]==1){
                dfs(grid,i,0,m,n,temp);
            }
            if(grid[i][n-1]==1){
                dfs(grid,i,n-1,m,n,temp);
            }
        }
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j]==1){
                    temp=0;
                    dfs(grid,i,j,m,n,temp);
                    ans+=temp;
                }
            }
        }
        return ans;
    }
};
