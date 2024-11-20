class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int lbl=1;
        vector<pair<int,int>> cells(n*n+1);
        vector<int> columns(n);
        iota(columns.begin(),columns.end(),0);
        for(int i=n-1;i>=0;i--){
            for(int j: columns){
                cells[lbl++] = {i,j};
            }
            reverse(columns.begin(),columns.end());
        }
        vector<int> dist(n*n+1,-1);
        dist[1] = 0;
        queue<int> q;
        q.push(1);
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(int nxt=t+1;nxt<=min(t+6,n*n);nxt++){
                auto &[x,y] = cells[nxt];
                int destination = (board[x][y] !=-1) ? board[x][y] : nxt;
                if(dist[destination]==-1){
                    dist[destination] = dist[t]+1;
                    q.push(destination);
                }
            }
        }
        return dist[n*n];
    }
};
