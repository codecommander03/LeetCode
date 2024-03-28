class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> gr[n];
        vector<int> deg(n);
        unordered_set<int> s;

        for(int i=0;i<prerequisites.size();i++){
            gr[prerequisites[i][0]].push_back(prerequisites[i][1]);
            deg[prerequisites[i][1]]++;
        }

        queue<int> q;
        for(int i=0;i<n;i++){
            if(deg[i]==0) q.push(i);
        }
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            s.insert(temp);

            for(auto it: gr[temp]){
                if(--deg[it] == 0) q.push(it);
            }
        }
        return s.size()==n;
    }
};
