class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s+s;
        t = t.substr(1,2*s.size()-2);
        return t.find(s)!=-1;
    }
};
