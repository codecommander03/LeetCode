class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector< pair<int,double> >> gr(n);
        for(int i=0;i<edges.size();i++){
            int x = edges[i][0],y = edges[i][1];
            gr[x].push_back( {y,succProb[i]});
            gr[y].push_back( {x,succProb[i]});
        }

        vector<double> d(n,0);
        d[start] = 1.00;
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto it: gr[temp]){
                int x = it.first;
                double p = it.second;
                double p2 = p*d[temp];
                if(p2 > d[x]){
                    d[x] = p2;
                    q.push(x);
                }
            }
        }
        return d[end];
    }
};
