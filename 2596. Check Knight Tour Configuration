class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        unordered_map<int,pair<int,int>> m;
        int n = grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                m[grid[i][j]] = {i,j};
            }
        }
        if(m[0].first!=0 || m[0].second!=0) return false;
        for(int i=1;i<=n*n-1;i++){
            int dx=m[i].first-m[i-1].first,dy=m[i].second-m[i-1].second;
            if((abs(dx)==2 && abs(dy)==1)||(abs(dx)==1 && abs(dy)==2)) continue;
            else return false;
        }
        return true;
    }
};
