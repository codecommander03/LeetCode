class Solution {
public:
    vector<double> dis(const vector<vector<int>>&p,double x,double y){
        vector<double> res(3);
        for(auto pt: p){
            auto dx = pt[0] - x;
            auto dy = pt[1] - y;
            auto d = sqrt(dx*dx + dy*dy);
            res[0] += d;
            res[1] += dx/(d+1e-9);
            res[2] += dy/(d+1e-9);
        }
        return res;
    }
    double getMinDistSum(vector<vector<int>>& positions) { // Gradient Descent
        double x,y,step=1.0;
        while(step>1e-9){
            auto cost = dis(positions,x,y);
            auto x2 = x + step * cost[1];
            auto y2 = y + step * cost[2];
            if(dis(positions,x2,y2)[0]<cost[0]){
                x = x2;
                y = y2;
            }
            else{
                step *= 0.1;
            }
        }
        return dis(positions,x,y)[0];
    }
};
