class Solution {
public:
    // bool isScramble(string s1, string s2) {
    //     int n = s1.size();
    //     if(s2.size()!=n) return false;
    //     int dp[n][n][n+1]; // x,y,len
    //     memset(dp,0,sizeof(dp));

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if(s1[i]==s2[j]) dp[i][j][1] = 1;
    //         }
    //     }

    //     for(int l=2;l<=n;l++){
    //         for(int i=0;i<=n-l;i++){
    //             for(int j=0;j<=n-l;j++){
    //                 for(int k=1;k<l;k++){
    //                     if( (dp[i][j][k] && dp[i+k][j+k][l-k])
    //                     ||
    //                     (dp[i][j+l-k][k]&&dp[i+k][j][l-k]) ){
    //                         dp[i][j][l] = 1;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //     return dp[0][0][n];
    // }
    unordered_map<string,bool> m;
    bool isScramble(string s1,string s2){
        int n = s1.size();
        if(s2.size()!=n) return false;
        if(s1==s2) return true;
        if(m.count(s1+s2)){
            return m[s1+s2];
        }
        unordered_map<char,int> s1_start,s2_start,s2_end;
        for(int i=1;i<=n-1;i++){
            s1_start[s1[i-1]-'a']++;
            s2_start[s2[i-1]-'a']++;
            s2_end[s2[n-i]-'a']++;

            string a = s1.substr(0,i);
            string b = s2.substr(0,i);
            string c = s1.substr(i);
            string d = s2.substr(i);

            if(s1_start==s2_start && isScramble(a,b) && isScramble(c,d)){
                m[s1+s2]=true;
                return true;
            }

            b = s2.substr(n-i);
            d = s2.substr(0,n-i);

            if(s1_start==s2_end && isScramble(a,b) && isScramble(c,d)){
                m[s1+s2]=true;
                return true;
            }
        }
        m[s1+s2]=false;
        return false;
    }
};
