class Solution {
public:
    int countGoodSubstrings(string s) {
        std::vector<int> v(26,0);
        if(s.size()<3) return 0;
        int ans = 0;
        if(s[0] != s[1] && s[0]!= s[2] && s[1]!=s[2]) ans++;
        v[s[0]-'a']++;
        v[s[1]-'a']++;
        v[s[2]-'a']++;
        for(int i=3;i<s.size();i++){
            v[s[i-3]-'a']--;
            if(v[s[i]-'a']==0 && v[s[i-1]-'a']==1 && v[s[i-2]-'a']==1) ans++;
            v[s[i]-'a']++; 
        }
        return ans;
    }
};
