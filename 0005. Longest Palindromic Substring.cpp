class Solution {
private:
    bool helper(vector<vector<bool>> &dp,int i,int j,string &s){
        if(i==j) return dp[i][j] = true;
        if(j-i==1){
            if(s[i]==s[j]) return dp[i][j] = true;
            else return dp[i][j] = false;
        }
        if(s[i]==s[j] && dp[i+1][j-1]==true){
            return dp[i][j] = true;
        }
        else{
            return dp[i][j] = false;
        }

    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int ans = 0,start_ind=0;
        vector<vector<bool>> dp(n,vector<bool>(n,false));

        for(int len=0;len<n;len++){
            for(int i=0,j=len;j<n;i++,j++){
                helper(dp,i,j,s);
                if(dp[i][j]==true){
                    if(j-i+1>ans){
                        ans=j-i+1;
                        start_ind = i;
                    }
                }
            }
        }
        return s.substr(start_ind,ans);
    }
};
