class Solution {
public:
    vector<int> gridIllumination(int n, vector<vector<int>>& lamps, vector<vector<int>>& queries) {
        unordered_map<int,int> r,c,d1,d2;
        unordered_map<int,unordered_set<int>> m;

        for(auto it: lamps){
            int x = it[0],y = it[1];
            if(m[x].insert(y).second){
                r[x]++;
                c[y]++;
                d1[x+y]++;
                d2[x-y]++;
            }
        }
        vector<int> ans;
        for(auto it: queries){
            int i=it[0], j=it[1];

            if(r[i] || c[j] || d1[i+j] || d2[i-j]){
                ans.push_back(1);
                for(int I=i-1;I<=i+1;I++){
                    for(int J=j-1;J<=j+1;J++){
                        if(m[I].erase(J)){
                            r[I]--;
                            c[J]--;
                            d1[I+J]--;
                            d2[I-J]--;
                        }
                    }
                }
            }
            else ans.push_back(0);
        }
        return ans;
    }
};
