class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size()+1;
        unordered_map<int,vector<int>> adj;
        for(auto i: adjacentPairs){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> ans;
        for(auto i: adj){
            if(i.second.size()==1){
                ans.push_back(i.first);
                ans.push_back(i.second[0]);
                break;
            }
        }
        while(ans.size()<n){
            int end = ans[ans.size()-1],prev = ans[ans.size()-2];
            if(adj[end][0] != prev){
                ans.push_back(adj[end][0]);
            }
            else ans.push_back(adj[end][1]);
        }
        return ans;
    }
};
