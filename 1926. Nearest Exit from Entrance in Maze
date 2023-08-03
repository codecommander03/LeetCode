class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size(),n=maze[0].size();
        vector<vector<int>> exit(m,vector<int>(n,0));
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int j=0;j<n;j++){
            if(maze[0][j]=='.') exit[0][j] = 1;
            if(maze[m-1][j]=='.') exit[m-1][j] = 1;
        }
        for(int i=0;i<m;i++){
            if(maze[i][0]=='.') exit[i][0] = 1;
            if(maze[i][n-1]=='.') exit[i][n-1]=1;
        }
        exit[entrance[0]][entrance[1]] = 0;
        queue<pair<int,int>> q;
        q.push({entrance[0],entrance[1]});
        vis[entrance[0]][entrance[1]] = 1;
        int ans = 0;
        int dx[4]={0,0,-1,1},dy[4]={-1,1,0,0};
        while(!q.empty()){
            int sz = q.size();
            ans++;
            while(sz--){
                auto t = q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int i=t.first+dx[k],j=t.second+dy[k];
                    if(i>=0 && i<m && j>=0 && j<n && vis[i][j]==0 && maze[i][j]=='.'){
                        if(exit[i][j]==1) return ans;
                        vis[i][j] = 1;
                        q.push({i,j});
                    }
                }
            }
        }
        return -1;
    }
};
