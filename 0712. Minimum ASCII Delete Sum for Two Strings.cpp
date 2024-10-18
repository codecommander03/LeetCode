class Solution {
public:
    int dp[1001][1001];
    int help(int i,int j,string&s1,string&s2){
        if(dp[i][j] != -1) return dp[i][j];
        if(i==s1.size()){
            int ans = 0;
            for(int k=j;k<s2.size();k++) ans += int(s2[k]);
            return ans;
        }
        if(j==s2.size()){
            int ans = 0;
            for(int k=i;k<s1.size();k++) ans += int(s1[k]);
            return ans;
        }
        dp[i][j] = min(s1[i]+help(i+1,j,s1,s2),s2[j]+help(i,j+1,s1,s2));
        if(s1[i]==s2[j]) dp[i][j] = min(dp[i][j],help(i+1,j+1,s1,s2));
        return dp[i][j];
    }
    int minimumDeleteSum(string s1, string s2) {
        memset(dp,-1,sizeof(dp));
        return help(0,0,s1,s2);
    }
};
