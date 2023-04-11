class Solution {
public:
    int n;
    bool pal(string &s){
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]) return false;
        }
        return true;
    }
    string breakPalindrome(string palindrome) {
        n = palindrome.size();
        for(char c ='a';c<='z';c++){
            if(c!='a'){
                for(int i=n-1;i>=n/2;i--){
                    if(palindrome[i]!=c){
                        char t = palindrome[i];
                        palindrome[i] = c;
                        if(!pal(palindrome)) return palindrome;
                        palindrome[i] = t;
                    }
                }
            }
            else{
                for(int i=0;i<=n/2;i++){
                    if(palindrome[i]!=c){
                        char t = palindrome[i];
                        palindrome[i] = c;
                        if(!pal(palindrome)) return palindrome;
                        palindrome[i] = t;
                    }
                }
            }
        }
        return "";
    }
