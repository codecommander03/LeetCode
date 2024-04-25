class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        for(int j=0;j<n;j++){
            int l=0,r=m-1;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(matrix[mid][j]==target) return true;
                else if(matrix[mid][j]>target) r=mid-1;
                else l=mid+1;
            }
        }
        return false;
    }
};
