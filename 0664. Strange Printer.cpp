class Solution {
public:
    int n;
    vector<vector<int>> dp;
    int help(string &s,int l,int r){
        if(l>r) return 0;
        if(l==r) return 1;
        if(dp[l][r]!=-1) return dp[l][r];
        int ans = 1 + help(s,l+1,r);
        for(int i=l+1;i<=r;i++){
            if(s[i]==s[l]){
                ans = min(ans,help(s,l,i-1)+help(s,i+1,r));
            }
        }
        return dp[l][r] = ans;
    }
    int strangePrinter(string &s) {
        n = s.size();
        dp.resize(n,vector<int>(n,-1));
        return help(s,0,n-1);
    }
};
