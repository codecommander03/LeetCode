class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans=0;
        vector<vector<int>> v(26,vector<int>(26,0));
        for(string s: words){
            int i = s[0]-'a',j = s[1]-'a';
            if(v[j][i]){
                ans+=4;
                v[j][i]--;
            }
            else v[i][j]++;
        }
        for(int i=0;i<26;i++){
            if(v[i][i]){
                ans+=2;
                break;
            }
        }

        return ans;
    }
};
