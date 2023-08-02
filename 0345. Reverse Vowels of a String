class Solution {
public:
    string reverseVowels(string s) {
        vector<int> v;
        unordered_map<char,int> m;
        m['a'] = 1;
        m['e'] = 1;
        m['i'] = 1;
        m['o'] = 1;
        m['u'] = 1;
        m['A'] = 1;
        m['E'] = 1;
        m['I'] = 1;
        m['O'] = 1;
        m['U'] = 1;
        int i=0,j=s.size()-1;
        while(i<j){
            while(i<j && m.count(s[i])!=1) i++;
            while(i<j && m.count(s[j])!=1) j--;
            if(i<j && m.count(s[j])==1 && m.count(s[i])==1) swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
