class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<int> r(m),c(n);
        vector<pair<int,int>> mp(m*n+1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[mat[i][j]] = {i,j};
            }
        }

        for(int i=0;i<m*n;i++){
            auto p=mp[arr[i]];
            r[p.first]++;
            c[p.second]++;
            if(r[p.first]==n || c[p.second]==m) return i;
        }
        return 0;
    }
};
