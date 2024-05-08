class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        int n = pattern.size();
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(temp != "") v.emplace_back(temp);
                temp = "";
            }
            else temp.push_back(s[i]);
        }
        if(temp != "") v.emplace_back(temp);
        if(v.size() != n) return false;
        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        
        for(int i=0;i<n;i++){
            if(m1.count(pattern[i])==0 && m2.count(v[i])==0){
                m1[pattern[i]] = v[i];
                m2[v[i]] = pattern[i];
            }
            else if(m1[pattern[i]]==v[i] && m2[v[i]]==pattern[i]) continue;
            else return false;
        }
        return true;
    }
};
