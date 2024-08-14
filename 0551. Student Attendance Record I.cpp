class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        bool late = false;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='A') a++;
            if(s[i]=='L'){
                if(i<=n-3 && s[i+1]=='L' && s[i+2]=='L'){
                    late = true;
                    break;
                }
            }
        }
        if(late || a>=2) return false;
        return true;
    }
};
