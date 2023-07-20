class Solution {
public:
    static bool comp(const vector<int>&a,const vector<int>&b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),comp);
        int prev=0,cnt = 1;
        for(int i=1;i<n;i++){
            if(intervals[prev][1] <= intervals[i][0]){
                prev = i;
                cnt++;
            }
        }
        return n-cnt;
    }
};
