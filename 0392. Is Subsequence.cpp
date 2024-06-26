class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int N = t.length();
        if(n==0) return true;
        bool flag = false;
        int i=0,j=0;
        while(i<n && j<N){
            if(s[i]==t[j]){
                if(i==n-1){
                    flag = true;
                    break;
                }
                i++;
                j++;
                continue;
            }
            else{
                j++;
            }
        }
        return flag;
    }
};
