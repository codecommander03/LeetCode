class Solution {
public:
    int m,n;
    bool search(vector<vector<char>>& b, string &word,int i,int j,int index){
        if(i<0 || i>=m || j<0 || j>=n) return false;
        if(index == word.size()) return true;
        if(b[i][j]!=word[index]) return false;
        char c = b[i][j];
        b[i][j]='*';
        if(search(b,word,i-1,j,index+1)) return true;
        if(search(b,word,i+1,j,index+1)) return true;
        if(search(b,word,i,j-1,index+1)) return true;
        if(search(b,word,i,j+1,index+1)) return true;
        b[i][j]=c;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] ){
                    if(word.size()==1 || search(board,word,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};
