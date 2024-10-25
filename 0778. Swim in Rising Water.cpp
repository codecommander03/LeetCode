class Solution {
public:
    struct T {
        int t, x, y;
        T(int a, int b, int c) : t (a), x (b), y (c){}
        bool operator< (const T &d) const {return t > d.t;}
    };
    int n;
    bool valid(int i,int j){
        return i>=0 && j>=0 && i<n && j<n;
    }
    int swimInWater(vector<vector<int>>& grid) { // dijkstra's
        n = grid.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        priority_queue<T> pq;
        pq.push(T(grid[0][0],0,0));
        vis[0][0] = 1;

        int dx[4] = {0,0,-1,1};
        int dy[4] = {1,-1,0,0};
        int ans = 0;
        while(1){
            T p = pq.top();
            pq.pop();
            ans = max(ans,p.t);

            if(p.x==n-1 && p.y==n-1) return ans;

            for(int i=0;i<4;i++){
                int X=p.x+dx[i],Y=p.y+dy[i];
                if(valid(X,Y) && !vis[X][Y]){
                    vis[X][Y] = 1;
                    pq.push(T(grid[X][Y],X,Y));
                }
            }

        }
    }
};
