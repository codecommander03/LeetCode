class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());

        int r=points[0][1];
        int ans = 1;
        for(auto v: points){
            if(r >= v[0]){
                r = min(r,v[1]);
            }
            else{
                ans++;
                r=v[1];
            }
        }
        return ans;
    }
};
