class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source==target) return 0;
        int n =routes.size();
        //unordered_map<pair<int,int>,int> m;
        unordered_map<int,vector<int>> bus_to_routenum; // this will give all rooutes of bus[i]
        for(int i=0;i<n;i++){
            for(int x: routes[i]){
                bus_to_routenum[x].emplace_back(i);
            }
        }
        vector<bool> bustaken(n);
        queue<int> q;
        for(int i: bus_to_routenum[source]){
            q.push(i);
            bustaken[i] = true;
        }
        int ans = 0;
        while(!q.empty()){
            ans++;
            for(int i =q.size();i>0;i--){
               int curr_bus = q.front();
               q.pop();

                for(int x: routes[curr_bus]){
                   if(x==target) return ans;

                    for(int j=0;j<bus_to_routenum[x].size();j++){
                        if(!bustaken[bus_to_routenum[x][j]]){
                            bustaken[bus_to_routenum[x][j]]=true;
                            q.push(bus_to_routenum[x][j]);
                        }
                    }
                }
            }
        }
        return -1;
    }
};
