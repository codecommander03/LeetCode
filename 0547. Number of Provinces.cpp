class Solution {
public:
    void dfs(int &node,vector<int> adj[],vector<int> &visited){
        visited[node]=1;
        for(auto i: adj[node]){
            if(visited[i]==0){
                dfs(i,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] && i!=j){
                    adj[i].emplace_back(j);
                    adj[j].emplace_back(i);
                }
            }
        }

        vector<int> visited(n,0);
        int count = 0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                count++;
                dfs(i,adj,visited);
            }
        }
        return count;
    }
};
