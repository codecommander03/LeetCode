class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n = grid.size();
        map<string,int> r,c;

        for(int i=0;i<n;i++){
            string row="";
            string col="";
            for(int j=0;j<n;j++){
                row = row + to_string(grid[i][j]) + " ";
                col = col + to_string(grid[j][i]) + " ";
            }
            r[row]++;
            c[col]++;
            //if(!c.count(row)) c[row]++;
        }
        int ans = 0;
        for(auto &i: r){
            //if(c.find(i.first)!=c.end()) ans+= i.second * c[i.first];
            ans+= i.second * c[i.first];
        }
        return ans;
    }
};
