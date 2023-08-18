class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> adj(n);
        for(auto it: roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int ans = 0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int cnt = 0;
                bool found = false;
                if(adj[i].size()<adj[j].size()){
                    for(int it: adj[i]){
                        if(it==j){
                            found=true;
                            break;
                        }
                    }
                }
                else{
                    for(int it: adj[j]){
                        if(it==i){
                            found = true;
                            break;
                        }
                    }
                }
                cnt = adj[i].size()+adj[j].size();
                if(found) cnt--;
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
