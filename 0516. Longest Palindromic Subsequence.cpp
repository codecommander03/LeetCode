class Solution {
public:
    //vector<vector<int>> v(1000,vector<int>(1000,0));
    int v[1000][1000] = {};
    int longestPalindromeSubseq(string s) {
        //v.resize(s.size(),vector<int>(s.size(),0));
        return help(s,0,s.size()-1);
    }
    int help(string &s,int l,int r){
        if(l==r) return 1;
        if(l > r) return 0;
        if(v[l][r]!=0) return v[l][r];
        if(s[l]==s[r]){
            return v[l][r] = help(s,l+1,r-1) + 2;
        }
        else{
            return v[l][r]=max(help(s,l+1,r),help(s,l,r-1));
        }
    }
};
