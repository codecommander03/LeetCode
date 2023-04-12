class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string s: strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            m[temp].emplace_back(s);
        }
        vector<vector<string>> ans;
        for(auto it: m){
            ans.emplace_back(it.second);
        }
        return ans;
    }
};
