class Solution {
public:
    bool check(const vector<vector<char>>& board,int x,int y){
        return (x>=0 && y>=0 && x<board.size() && y < board[0].size());
    }
    vector<int> d = {-1,0,1};
    void reveal(vector<vector<char>>& board,int x,int y){
        if(!check(board,x,y)) return;
        if(board[x][y] == 'E'){
            int cnt = 0;
            for(int i: d){
                for(int j: d){
                    if(i==0 && j==0) continue;
                    if(check(board,x+i,y+j) && board[x+i][y+j]=='M') cnt++;
                }
            }

            if(cnt>0) board[x][y] = '0' + cnt;
            else{
                board[x][y] = 'B';
                for(int i: d){
                    for(int j: d){
                        if(i==0 && j==0) continue;
                        reveal(board,x+i,y+j);
                    }
                }
            }
        }
    }
    
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int x = click[0],y = click[1];
        if(board[x][y] == 'M'){
            board[x][y] = 'X';
            return board;
        }
        reveal(board,x,y);
        return board;
    }
};
