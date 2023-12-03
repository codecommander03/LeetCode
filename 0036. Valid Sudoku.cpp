class Solution {
public:/*
    int boxn(int x,int y){/*
        int a = x/3;
        int b = y/3;
        if(a==0){
            if(b==0) return 0;
            else if(b==1) return 1;
            else if(b==2) return 2;
        }
        else if(a==1){
            if(b==0) return 3;
            else if(b==1) return 4;
            else if(b==2) return 5;
        }
        else if(a==2){
            if(b==0) return 6;
            else if(b==1) return 7;
            else if(b==2) return 8;
        }
        if(x<3){
            if(y<3){
                return 0;
            }
            if(y<6){
                return 1;
            }
            if(y<9){
                return 2;
            }
        }
        if(x<6){
            if(y<3){
                return 3;
            }
            if(y<6){
                return 4;
            }
            if(y<9){
                return 5;
            }
        }
        if(x<9){
            if(y<3){
                return 6;
            }
            if(y<6){
                return 7;
            }
            if(y<9){
                return 8;
            }
        }
    }*/
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9,vector<int>(9,0));
        vector<vector<int>> col(9,vector<int>(9,0));
        vector<vector<int>> box(9,vector<int>(9,0));

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(row[i][int(board[i][j])-49]>0){
                        return false;
                    }
                    row[i][int(board[i][j])-49]++;

                    if(col[j][int(board[i][j])-49]>0){
                        return false;
                    }
                    col[j][int(board[i][j])-49]++;

                    int box_num;

                    if(i<3){
                        if(j<3) box_num=0;
                        else if(j<6) box_num=1;
                        else if(j<9) box_num=2;
                    }
                    else if(i<6){
                        if(j<3) box_num=3;
                        else if(j<6) box_num=4;
                        else if(j<9) box_num=5;
                    }
                    else if(i<9){
                        if(j<3) box_num=6;
                        else if(j<6) box_num=7;
                        else if(j<9) box_num=8;
                    }
                    if(box[box_num][int(board[i][j]-49)]>0){
                        return false;
                    }
                    box[box_num][int(board[i][j]-49)]++;
                }
            }
        }
        return true;
    }
};
