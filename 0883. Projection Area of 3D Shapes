class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int base=0,row=0,col=0;
        vector<int> cols(n,0);
        for(int i=0;i<n;i++){
            int temp = 0;
            for(int j=0;j<n;j++){
                if(grid[i][j]) base++;
                temp = max(temp,grid[i][j]);
                cols[j] = max(cols[j],grid[i][j]);
            }
            row+=temp;
        }
        for(int &i: cols) col+=i;
        return base+row+col;
    }
};
