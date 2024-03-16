class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> m;
        string curr = s.substr(0,10);
        m[curr]++;
        for(int i=10;i<s.size();i++){
            curr += s[i];
            curr.erase(0,1);
            m[curr]++;
        }
        vector<string> res;
        for(auto &i: m){
            if(i.second>1) res.emplace_back(i.first);
        }
        return res;
    }
};
