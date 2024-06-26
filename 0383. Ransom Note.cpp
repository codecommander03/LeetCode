class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    static bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        for(char c: magazine){
            m[c]++;
        }
        for(char c: ransomNote){
            m[c]--;
            if(m[c]<0) return false;
        }
        return true;
    }
};
