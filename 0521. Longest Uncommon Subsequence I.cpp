class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a.size() != b.size()) return max(a.size(),b.size());
        for(int i=0;i<a.size();i++){
            if(a[i] != b[i]) return b.size();
        }
        return -1;
    }
};
