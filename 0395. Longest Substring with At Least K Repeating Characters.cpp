class Solution {
public:
    int helper(string &s,int l,int r,int k){
        unordered_map<char,int> m;
        for(int i=l;i<=r;i++) m[s[i]]++;

        bool valid = true;
        for(auto i: m){
            if(i.second<k){
                valid = false;
                break;
            }
        }
        if(valid) return r-l+1;

        int i=l,ans=0;
        for(int j=l;j<=r;j++){
            if(m[s[j]] < k){
                ans = max(ans,helper(s,i,j-1,k));
                i=j+1;
            }
        }
        return max(ans,helper(s,i,r,k));
    }
    int longestSubstring(string s, int k) {
        return helper(s,0,s.size()-1,k);
    }
};
