class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>> visited(m, vector<int>(n));

        vector<vector<char>> ans(m, vector<char>(n, 'X'));
        stack<pair<int, int>> s;
        int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
        for (int j = 0;j < n;j++)
        {
            if (board[0][j] == 'O') {
                visited[0][j] = 1;
                s.push({0, j});
            } 
            if (board.size() > 1) {
                if (board[m-1][j] == 'O'){
                    visited[m-1][j] = 1;
                    s.push({m-1, j});
                }
            }
        }

        for (int i = 1; i < m-1;i++)
        {
            if (board[i][0] == 'O') {
                visited[i][0] = 1;
                s.push({i, 0});
            } 
            if (board.size() > 1) {
                if (board[i][n-1] == 'O'){
                    visited[i][n-1] = 1;
                    s.push({i, n-1});
                }
            }
        }
        
        while(s.size()){
            auto p = s.top();
            s.pop();

            int r = p.first, c = p.second;
            ans[r][c] = 'O';

            

            for (int i = 0; i < 4; ++i)
            {
                int nRow = r + dx[i],nCol = c + dy[i];

                if (nRow >= 0 && nCol >= 0 && nRow < m && nCol < n){
                    if (board[nRow][nCol] == 'O' && !visited[nRow][nCol]){
                        s.push({nRow, nCol});
                        visited[nRow][nCol] = 1;
                    }
                }
            }             
        }

        board = ans;
    }
};
