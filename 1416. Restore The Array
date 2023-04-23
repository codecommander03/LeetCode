class Solution {
public:
    int mod = 1e9+7;
    int n;
    int dfs(string &s,int k,vector<int>& dp,int i){
        if(i==n) return 1;
        if(s[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];

        int ans = 0;
        long long num = 0;
        for(int j=i;j<n;j++){
            num = num*10 + (s[j]-'0');
            if(num>k) break;
            ans = (ans + dfs(s,k,dp,j+1))%mod;
        }
        return dp[i] = ans;
    }
    int numberOfArrays(string s, int k) {
        n = s.size();
        vector<int> dp(n,-1);
        return dfs(s,k,dp,0);
    }
};
