class Solution {
public:

    string reverseWords(string s) {
        int l=0;
        int r=0,n=s.size();
        string ans="";
        while(r<n){
            if(s[r]==' '){
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
            r++;
        }
        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
        }
        return s;
    }
};
