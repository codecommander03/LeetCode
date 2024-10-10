class Solution {
public:
    void area(vector<vector<int>>& grid,int x,int y,int &cnt){
        if(grid[x][y]==0) return;
        grid[x][y] = 0;
        cnt++;
        if(x-1>=0 && grid[x-1][y]) area(grid,x-1,y,cnt);
        if(x+1<grid.size() && grid[x+1][y]) area(grid,x+1,y,cnt);
        if(y-1>=0 && grid[x][y-1]) area(grid,x,y-1,cnt);
        if(y+1<grid[0].size() && grid[x][y+1]) area(grid,x,y+1,cnt); 

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    int temp=0;
                    area(grid,i,j,temp);
                    ans = max(ans,temp);
                }
            }
        }
        return ans;
    }
};
