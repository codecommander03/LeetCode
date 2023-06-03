class Solution {
public:
    int dfs(int headID,vector<int>& informTime,vector<vector<int>>& adj){
        int ans = 0;

        for(int it: adj[headID]){
            ans = max(ans,dfs(it,informTime,adj));
        }

        return informTime[headID] + ans;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);

        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1){
                adj[manager[i]].push_back(i);
            }
        }
        return dfs(headID,informTime,adj);
    }
};
