class Solution {
public:
    string modifyString(string s) {
        int n = s.size();
        if(n==1){
            if(s!="?") return s;
            else return "a";
        }
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                if(i==0){
                    if(s[1] != 'a') s[0] = 'a';
                    else s[0] = 'b';
                }
                else if(i==n-1){
                    if(s[n-2] != 'a') s[n-1] = 'a';
                    else s[n-1] = 'n';
                }
                else{
                    for(char c = 'a';c<='z';c++){
                        if(s[i-1]!=c && s[i+1]!=c){
                            s[i] = c;
                            break;
                        }
                    } 
                }
            }
        }
        return s;
    }
};
