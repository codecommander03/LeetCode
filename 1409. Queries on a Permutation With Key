class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;
        vector<int> v(m+1);
        for(int i=1;i<=m;i++) v[i] = i;
        for(int q: queries){
            int ind = v[q];
            ans.push_back(v[q]-1);
            for(int i=1;i<=m;i++){
                if(v[i]<ind){
                    v[i]++;
                }
            }
            v[q] = 1;
        }
        return ans;
    }
};
