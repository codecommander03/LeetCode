class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n==1 || n==2) return n-1;
        unordered_map<int,vector<int>> m;

        for(int i=0;i<n;i++){
            m[arr[i]].emplace_back(i);
        }
        queue<int> q;
        q.push(0);
        vector<bool> visited(n);
        visited[0] = true;
        int distance=0;
        
        while(!q.empty()){
            int remain = q.size();
            while(remain--){
                int x = q.front();
                if(x==n-1) return distance;
                q.pop();

                vector<int> &temp = m[arr[x]];
                temp.push_back(x-1);
                temp.push_back(x+1);

                for(int i: temp){
                    if(i>=0 && i<n && !visited[i]){
                        q.push(i);
                        visited[i] = true;
                    }
                }
                temp.clear();
            }
            distance++;
        }
        return 404;
    }
};
