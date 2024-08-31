class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(),n=mat[0].size();
        if(m*n!=r*c) return mat;
        vector<vector<int>> ans(r,vector<int>(c,-1));
        int ind=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //int x = ind/c,y= ind%r;
                int x = ind/c;
                //if(x>=1) x = 0;
                //ind -= x*c;
                int y = ind%c;
                ans[x][y] = mat[i][j];
                ind++;
            }
        }
        return ans;
    }
};
