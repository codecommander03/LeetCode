class Solution {
public:
    int find(int i, vector<int>& v) {
        if (v[i] != i) {
            v[i] = find(v[i], v);
        }
        return v[i];
    }

    bool union1(int a, int b, vector<int>& v) {
        int i = find(a, v);
        int j = find(b, v);
        if (i == j) {
            return false;
        }
        v[i] = j;
        return true;
    }

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        
        iota(a.begin(),a.end(),0);
        iota(b.begin(),b.end(),0);

        int remove = 0,alice = 0,bob = 0;

        for (auto& edge : edges) {

            if(edge[0] == 3){
                if(union1(edge[1], edge[2], a)) {
                    alice++;
                    if (union1(edge[1], edge[2], b)) {
                        bob++;
                    }
                }
                else remove++;
            }

        }

        for(auto &edge: edges){
            if(edge[0] == 1){
                if(union1(edge[1], edge[2], a)) alice++;
                else remove++;
            }

            if(edge[0] == 2){
                if(union1(edge[1], edge[2], b)) bob++;
                else remove++;
            }
        }

        if(alice==n-1 && bob==n-1) return remove;
        return -1;
    }
};
