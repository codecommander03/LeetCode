class Solution {
public:
    bool check(string &s){
        for(int i=0;i<s.size();i++){
            if(s[i] != s[s.size()-1-i]) return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string s2 = "";
        for(char c: s){
            if(iswalnum(c)){
                s2 += tolower(c);
            }
        }
        return check(s2);
    }
};
