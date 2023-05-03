class Solution {
public:
    int n;
    int help(string &s,vector<vector<int>>& dp,int i,int j){
        if(i >= j) return 1;
        if(dp[i][j]>=0) return dp[i][j];
        if(s[i]==s[j]) return help(s,dp,i+1,j-1);
        else return 0;
    }
    int countSubstrings(string &s) {
        n = s.size();
        
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ans+= help(s,dp,i,j);
            }
        }

        return ans;
    }
};
