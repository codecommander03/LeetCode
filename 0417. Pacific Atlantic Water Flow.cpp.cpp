class Solution {
public:
    int m,n;
    void dfs(vector<vector<int>>& h, vector<vector<bool>>& v, int i, int j) {

        v[i][j] = true;
        if (i-1 >= 0 && v[i-1][j] != true && h[i-1][j] >= h[i][j]) dfs(h, v, i-1, j);
        
        if (i+1 < m && v[i+1][j] != true && h[i+1][j] >= h[i][j]) dfs(h, v, i+1, j);
       
        if (j-1 >= 0 && v[i][j-1] != true && h[i][j-1] >= h[i][j]) dfs(h, v, i, j-1);
        
        if (j+1 < n && v[i][j+1] != true && h[i][j+1] >= h[i][j]) dfs(h, v, i, j+1);

    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size(), n = heights[0].size();
        vector<vector<bool>> atl(m,vector<bool>(n));
        vector<vector<bool>> pac(m,vector<bool>(n));

        for(int i=0;i<m;i++){
            dfs(heights,pac,i,0);
            dfs(heights,atl,i,n-1);
        }
        for(int i=0;i<n;i++){
            dfs(heights,pac,0,i);
            dfs(heights,atl,m-1,i);
        }
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(atl[i][j]&&pac[i][j]) ans.push_back({i,j});
            }
        }
        return ans;
    }

};
