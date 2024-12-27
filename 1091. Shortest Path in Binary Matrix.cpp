class Solution {
public:
    int n;
    bool valid(int x,int y,vector<vector<int>>& grid){
        return (x>=0 && x<n && y>=0 && y<n && grid[x][y]==0);
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n = grid.size();
        if(grid[0][0]) return -1;
        vector<vector<int>> vis(n,vector<int>(n,-1));
        
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0][0] = 1;

        int dx[] = {0,0,-1,-1,-1,1,1,1};
        int dy[] = {-1,1,-1,0,1,-1,0,1};

        while(!q.empty()){
            auto p = q.front();
            q.pop();

            for(int i=0;i<8;i++){
                int x = p.first + dx[i];
                int y = p.second + dy[i];

                if(valid(x,y,grid) && vis[x][y]==-1){
                    vis[x][y] = vis[p.first][p.second] + 1;
                    q.push({x,y});
                }
            }
        }
        return vis[n-1][n-1];
    }
};
