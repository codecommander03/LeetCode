class Solution {
public:
    bool valid(int i,int j,int m,int n){
        return (i>=0 && j>=0 && i<m && j<n);
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size(),n = grid[0].size();
        vector<int> ans(n);

        for(int j=0;j<n;j++){
            int r=0,c = j;
            while(r<m){
                int prev = grid[r][c];
                c+=prev;

                if(c<0 || c>=n || grid[r][c]!=prev){
                    c=-1;
                    break;
                }
                r++;
            }
            ans[j]=c;
        }
        return ans;
    }
};
