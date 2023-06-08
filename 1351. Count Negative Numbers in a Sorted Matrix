class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0]<0){
                ans += n;
                continue;
            }
            if(grid[i][n-1]>=0) continue;
            int l=0,r=n-1;
            while(l<r){
                int mid = l + (r-l)/2;
                if(grid[i][mid]>=0) l = mid+1;
                else r = mid;
            }
            ans += (n-l);
        }
        return ans;
    }
};
