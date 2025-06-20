class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<(int)grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int ans=0;
        for(int i=0;i<grid[0].size();i++){
            int ma=grid[0][i];
            for(int j=0;j<grid.size();j++){
                ma=max(ma,grid[j][i]);
            }
            ans+=ma;
        }
        
        return ans;
    }
};
