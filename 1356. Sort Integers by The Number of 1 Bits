class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> m;
        for(int &i: arr){
            m[__builtin_popcount(i)].emplace_back(i);
        }
        vector<int> ans;
        for(auto &i: m){
            sort(begin(i.second),end(i.second));
            for(int &j: i.second){
                ans.emplace_back(j);
            }
        }
        return ans;
    }
};
