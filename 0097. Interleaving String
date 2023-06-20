class Solution {
public:
    int n,m,p;
    int dp[101][101][201];
    int lcs(int i,int j,int k,string&s1, string&s2, string&s3){
        if(i==n && j==m && k==p) return 1;
        if(k==p) return 0;
        int &ans = dp[i][j][k];
        if(ans != -1) return ans;
        int a=0,b=0;
        if(i<n && s1[i]==s3[k]) a = lcs(i+1,j,k+1,s1,s2,s3);
        if(j<m && s2[j]==s3[k]) b = lcs(i,j+1,k+1,s1,s2,s3);
        return ans = a||b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        n=s1.size(),m=s2.size(),p=s3.size();
        memset(dp,-1,sizeof(dp));
        cout<<lcs(0,0,0,s1,s2,s3);
        return lcs(0,0,0,s1,s2,s3);
    }
};
