class Solution {
public:
    int m,n;
    int vis[200][200];
    int x[4]={0,0,-1,1};
    int y[4]={-1,1,0,0};
    void dfs(int i,int j,vector<vector<char>>& board){
        if(i>=0 && i<m && j>=0 && j<n && board[i][j]=='X' && vis[i][j]==0){
            vis[i][j] = 1;
            for(int k=0;k<4;k++) dfs(i+x[k],j+y[k],board);
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vis[i][j] = 0;
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='X' && vis[i][j]==0){
                    ans++;
                    dfs(i,j,board);
                }
            }
        }
        return ans;
    }
};
