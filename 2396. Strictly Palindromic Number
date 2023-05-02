class Solution {
public:
    bool check(int num,int b){
        string s = "";
        
        while(num>0){
            s.push_back(num%b + '0');
            num /= b;
        }
        int n = s.size();
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[n-i-1]){
                return false;
            }
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            if(check(n,i)==false) return false;
        }
        return true;
    }
};
