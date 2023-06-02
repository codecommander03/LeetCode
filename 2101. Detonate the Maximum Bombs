class Solution {
public:
    void dfs(vector<vector<int>>&v,vector<bool>&vis,int&cnt,int curr){
        vis[curr] = true;
        cnt++;
        for(int it: v[curr]){
            if(vis[it]==false){
                dfs(v,vis,cnt,it);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();

        vector<vector<int>> v(n);

        for(int i=0;i<n;i++){
            int x1 = bombs[i][0];
            int y1 = bombs[i][1];
            long long r1 = bombs[i][2];
            for(int j=0;j<n;j++){
                if(i!=j){
                    long long x = abs(bombs[j][0]-x1);
                    long long y = abs(bombs[j][1]-y1);
                    if(x*x + y*y <= r1*r1){
                        v[i].push_back(j);
                    }
                }
            }
        }

        int ans = -1e9;
        for(int i=0;i<n;i++){
            int cnt = 0;
            vector<bool> vis(n,false);
            dfs(v,vis,cnt,i);
            ans = max(ans,cnt);
        }

        return ans;
    }
};
