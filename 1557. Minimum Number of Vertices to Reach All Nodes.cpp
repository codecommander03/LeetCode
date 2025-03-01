class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> in(n,true);
        for(auto &v: edges){
            in[v[1]] = false;
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            if(in[i]) ans.emplace_back(i);
        }
        return ans;
    }
};
