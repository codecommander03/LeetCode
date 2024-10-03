class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size(),n=img[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                int sj=max(j-1,0),ej=min(j+1,n-1);
                int si=max(i-1,0),ei=min(i+1,m-1);

                int sum = 0;
                for(int ii=si;ii<=ei;ii++){
                    for(int jj=sj;jj<=ej;jj++){
                        sum += img[ii][jj];
                    }
                }
                ans[i][j] = sum / ( (ej-sj+1) * (ei-si+1));
            }
        }
        return ans;
    }
};
