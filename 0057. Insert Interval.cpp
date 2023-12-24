class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int x=newInterval[0],y=newInterval[1];
        vector<vector<int>> ans;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(intervals[i][1]<x || y < intervals[i][0]) ans.emplace_back(intervals[i]);
            else{
                y = max(y,intervals[i][1]);
                x = min(x,intervals[i][0]);
                if(flag) ans.pop_back();
                ans.push_back({x,y});
                flag = true;
            }
        }
        if(!flag){
            for(int i=0;i<n;i++){
                if(ans[i][0] > y){
                    //cout<<i;
                    ans.insert(ans.begin()+i,newInterval);
                    flag = true;
                    break;
                }
            }
        }
        if(!flag) ans.emplace_back(newInterval);
        return ans;
    }
};
