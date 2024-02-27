class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if(n<=2) return n;

        int ans = 0;

        for(int i=0;i<n-1;i++){
            unordered_map<double,int> m;
            for(int j=i+1;j<n;j++){
                if(points[i][0]==0 && points[j][0]==0){
                    ans = max(ans,++m[INT_MAX]);
                }
                else{
                    double x = ((points[j][1]-points[i][1])*1.0/(points[j][0]-points[i][0]));
                    ans = max(ans,++m[x]);
                }
            }
        }
        return ans+1;
    }
};
