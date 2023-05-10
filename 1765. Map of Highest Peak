class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size(),n=isWater[0].size();
        vector<vector<int>> v(m,vector<int>(n,-1));
        queue< pair<int,int> > q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(isWater[i][j]){
                    v[i][j] = 0;
                    q.push( {i,j} );
                }
            }
        }

        while(!q.empty()){

            pair<int,int> p = q.front();
            q.pop();

            int x = p.first, y = p.second;

            int dx[] = {0,0,1,-1};
            int dy[] = {-1,1,0,0};

            for(int i=0;i<4;i++){
                int X=x+dx[i], Y=y+dy[i];
                if(X>=0 && X<m && Y>=0 && Y<n){
                    if(v[X][Y]==-1){
                        v[X][Y] = v[x][y]+1;
                        q.push({X,Y});
                    }
                }
            }
        }

        return v;
        
    }
};
