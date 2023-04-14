class Solution {
public:
    int n;
    int helper(vector<bool>& col,vector<bool>& d,vector<bool> &d2,int row){
        if(row==n) return 1;
        int cnt=0;
        for(int c=0;c<n;c++){
            int a = row + c;
            int b = row + (n - c - 1);
            if(!col[c] && !d[a] && !d2[b]){
                col[c] = d[a] = d2[b] = true;
                cnt+=helper(col,d,d2,row+1);

                col[c] = d[a] = d2[b] = false;
            }
        }
        return cnt;
    }
    int totalNQueens(int N) {
        n=N;
        vector<bool> col(n),diagonal(n+n-1),diagonal2(n+n-1);
        return helper(col,diagonal,diagonal2,0);
    }
};
