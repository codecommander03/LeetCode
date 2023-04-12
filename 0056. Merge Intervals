class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n==0) return {};
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;

        for(auto i: intervals){
            if(ans.empty() || (*ans.rbegin())[1] < i[0]){
                ans.emplace_back(i);
            }
            else{
                ans.back()[1]=max(ans.back()[1],i[1]);
            }
        }
        return ans;
    }
};
