class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0,n=s.size();
        while(i<n){
            if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z' || s[i]>='0' && s[i]<='9'){
                string temp = "";
                while(i<n && s[i]!=' '){
                    temp+=s[i++];
                }
                ans = temp + ans;
            }
            else{
                if(ans==""){
                    i++;
                    continue;
                }
                while(i<n && s[i]==' ') i++;
                ans = ' ' + ans;
            }
        }
        i=0;
        while(i<n){
            if(ans[i]==' ') i++;
            else break;
        }
        return ans.substr(i,n-i);
    }
};
