class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string,int> m;
        vector<string> ans;
        for(string &s: names){
            if(m.count(s)==0){
                m[s] = 1;
                ans.emplace_back(s);
            }
            else{
                int x = m[s];
                string s2 = s + "(" + to_string(x) + ")";
                while(m.count(s2)!=0){
                    x++;
                    s2 = s + "(" + to_string(x) + ")";
                }
                m[s] = x;
                ans.emplace_back(s2);
                m[s2] = 1;
            }
        }
        return ans;
    }
};
