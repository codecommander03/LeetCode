class Solution {
public:
    int n;
    bool valid(vector<string>& v,int r,int c){
        for(int i=r-1;i>=0;i--){
            if(v[i][c]=='Q') return false;
        }
        for(int i=1;i<=min(r,c);i++){
            if(v[r-i][c-i]=='Q') return false;
        }
        for(int i=1;i<=min(r,n-c-1);i++){
            if(v[r-i][c+i]=='Q') return false;
        }
        return true;
    }
    void help(vector<vector<string>>& ans,vector<string>& v,int row){
        if(row==n){
            ans.emplace_back(v);
            return;
        }
        for(int j=0;j<n;j++){
            if(v[row][j]=='.' && valid(v,row,j)){
                v[row][j] = 'Q';
                help(ans,v,row+1);

                v[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int N) {
        n = N;
        vector< vector<string> >ans;
        vector<string> v(n,string(n,'.'));
        help(ans,v,0);
        return ans;
    }
};
