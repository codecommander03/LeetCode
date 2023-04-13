class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        //set<int> s;
        int ans=-1;
        int min_d=INT_MAX;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
                int d = abs(points[i][0]-x) + abs(points[i][1]-y);
                if(d<min_d){
                    ans=i;
                    min_d = d;
                }
            }
        }
        return ans;
    }
};
