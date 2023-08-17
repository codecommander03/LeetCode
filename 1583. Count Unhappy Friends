class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
        vector<vector<int>> rank(n,vector<int>(n,1000));
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                rank[i][preferences[i][j]] = j;
            }
        }
        int ans = 0;
        vector<int> pairing(n);
        for(auto it: pairs){
            pairing[it[0]] = it[1],pairing[it[1]]=it[0];
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            cnt = 0;
            for(int j=0;j<n;j++){
                if(j != i && j != pairing[i]){
                    int d = pairing[i],v=pairing[j];
                    if(rank[i][j]<rank[i][d] && rank[j][i] < rank[j][v]) cnt = 1;
                }
            }
            ans+=cnt;
        }
        return ans;
    }
};
