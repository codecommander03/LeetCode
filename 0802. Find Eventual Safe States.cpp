class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> out(n,0);
        vector<vector<int>> grr(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                int x = graph[i][j];
                grr[x].push_back(i);
                out[i]++;
            }
        }

        vector<int> ans;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(out[i]==0) q.push(i);
        }

        vector<bool> vis(n,false);

        while(!q.empty()){
            int x = q.front();
            q.pop();

            vis[x] = true;

            for(int i: grr[x]){
                if(--out[i] ==0){
                    q.push(i);
                }
            }
        }
        for(int i=0;i<n;i++) if(vis[i]) ans.push_back(i);
        return ans;
    }
};
