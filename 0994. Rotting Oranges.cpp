class Solution {
public:
int m,n;
    bool valid(int x,int y){
        return (x>=0 && y>=0 && x<m && y<n);
    }
    int helper(vector<vector<int>>& grid,queue<pair<int,int>> &q,int &rem){
        int time=0;
        while(rem>0 && !q.empty()){
            int r =q.size();
            while(r--){
                pair<int,int> p = q.front();
                int x = p.first,y=p.second;
                q.pop();
                if(valid(x-1,y) && grid[x-1][y]==1){
                    q.push({x-1,y});
                    grid[x-1][y]= 2;
                    rem--;
                }
                if(valid(x+1,y) && grid[x+1][y]==1){
                    q.push({x+1,y});
                    grid[x+1][y]=2;
                    rem--;
                }
                if(valid(x,y-1) && grid[x][y-1]==1){
                    q.push({x,y-1});
                    grid[x][y-1]=2;
                    rem--;
                }
                if(valid(x,y+1) && grid[x][y+1]==1){
                    q.push({x,y+1});
                    grid[x][y+1]=2;
                    rem--;
                }
            }
            time++;
        }
        return time;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        m =grid.size(),n=grid[0].size();
        //vector<vector<int>> v(m,vector<int>(n,0));
        int rem=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1) rem++;
            }
        }

        int ans =  helper(grid,q,rem);

        if(rem>0) return -1;
        else return ans;
    }
};
