class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int rmin=0,rmax=n-1;
        int cmin=0,cmax=n-1;
        vector<vector<int>> ans(n,vector<int>(n));
        int cnt=1;
        while(cmax-cmin>0 && rmax-rmin>0){
            for(int j=cmin;j<=cmax;j++){
                //v.push_back(matrix[rmin][j]);
                ans[rmin][j] = cnt++;

            }
            for(int i=rmin+1;i<=rmax;i++){
                //v.push_back(matrix[i][cmax]);
                ans[i][cmax] = cnt++;
            }
            for(int j=cmax-1;j>=cmin;j--){
                //v.push_back(matrix[rmax][j]);
                ans[rmax][j] = cnt++;
            }
            for(int i=rmax-1;i>rmin;i--){
                //v.push_back(matrix[i][cmin]);
                ans[i][cmin] = cnt++;
            }
            rmin++,rmax--;
            cmin++,cmax--;
        }

        if(cmax-cmin==0 && rmax-rmin>0){
            for(int i=rmin;i<=rmax;i++){
                //v.push_back(matrix[i][cmax]);
                ans[i][cmax] = cnt++;
            }
        }
        else if(cmax-cmin>0 && rmax-rmin==0){
            for(int j=cmin;j<=cmax;j++){
                //v.push_back(matrix[rmin][j]);
                ans[rmin][j] = cnt++;
            }
        }
        if(cmax==cmin && rmax==rmin){
            //v.push_back(matrix[rmin][cmax]);
            ans[rmin][cmax] = cnt++;
        }
        return ans;
    }
};
