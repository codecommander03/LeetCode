class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rmin=0,rmax=matrix.size()-1;
        int cmin=0,cmax=matrix[0].size()-1;
        vector<int> v;

        while(cmax-cmin>0 && rmax-rmin>0){
            for(int j=cmin;j<=cmax;j++){
                v.push_back(matrix[rmin][j]);
            }
            for(int i=rmin+1;i<=rmax;i++){
                v.push_back(matrix[i][cmax]);
            }
            for(int j=cmax-1;j>=cmin;j--){
                v.push_back(matrix[rmax][j]);
            }
            for(int i=rmax-1;i>rmin;i--){
                v.push_back(matrix[i][cmin]);
            }
            rmin++,rmax--;
            cmin++,cmax--;
        }

        if(cmax-cmin==0 && rmax-rmin>0){
            for(int i=rmin;i<=rmax;i++){
                v.push_back(matrix[i][cmax]);
            }
        }
        else if(cmax-cmin>0 && rmax-rmin==0){
            for(int j=cmin;j<=cmax;j++){
                v.push_back(matrix[rmin][j]);
            }
        }
        if(cmax==cmin && rmax==rmin){
            v.push_back(matrix[rmin][cmax]);
        }
        return v;
    }
};
