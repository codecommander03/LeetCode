class Solution {
public:
    vector<vector<bool>> vis;
    int m,n;
    void dfs(vector<vector<int>>&grid,int i,int j,int&val){
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j] || !grid[i][j]) return;
        val += grid[i][j];
        vis[i][j] = true;
        dfs(grid,i+1,j,val);
        dfs(grid,i-1,j,val);
        dfs(grid,i,j-1,val);
        dfs(grid,i,j+1,val);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        m=grid.size(),n=grid[0].size();
        int ans = 0;
        vis.resize(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] && !vis[i][j]){
                    int temp=0;
                    dfs(grid,i,j,temp);
                    ans=max(ans,temp);
                }
            }
        }
        return ans;
    }
};
