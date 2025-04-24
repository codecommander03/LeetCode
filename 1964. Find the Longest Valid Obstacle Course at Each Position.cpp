class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> ans;
        vector<int> v;
        for(int &i: obstacles){
            int l = lower_bound(v.begin(),v.end(),i+1) - v.begin();
            if(l==v.size()){
                v.emplace_back(i);
            }
            else v[l] = i;
            ans.emplace_back(++l);
        }
        return ans;
    }
};
