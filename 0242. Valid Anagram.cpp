https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    static bool isAnagram(string s, string t) {
        //int m = s.size(),n = t.size();
        if(s.size()!=t.size()) return false;
        vector<int> v(26,0);
        for(char c: s){
            v[c-'a']++;
        }
        for(char c: t){
            v[c-'a']--;
            if(v[c-'a']<0) return false;
        }
        return true;
    }
};
