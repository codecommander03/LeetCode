class Solution {
public:
    using vv = pair<int,vector<int>>;
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        priority_queue<vv,vector<vv>,greater<vv>> q;
        vector<int> temp(m,0);
        int sum=0;
        for(int i=0;i<m;i++) sum += mat[i][0];
        q.push({sum,temp});
        map<vector<int>,int> vis;
        vis[temp] = 1;
        int x = 0;
        while(!q.empty()){
            auto p = q.top();
            q.pop();
            if(++x==k) return p.first;
            for(int i=0;i<m;i++){
                sum = p.first;
                temp = p.second;
                int j = temp[i];
                sum -= mat[i][j];
                if(j<=n-2){
                    sum += mat[i][j+1];
                    temp[i] = j+1;
                    if(vis.find(temp)==vis.end()){
                        vis[temp] = 1;
                        q.push({sum,temp});
                    }
                }
            }
        }
        return -1;
    }
};
