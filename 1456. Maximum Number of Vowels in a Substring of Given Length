class Solution {
public:
    bool z(char &c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    int maxVowels(string s, int k) {
        int n = s.size(),i=0;
        int cur=0;
        while(i<k){
            if(z(s[i])) cur++;
            i++;
        }
        int ans = cur;
        while(i<n){
            if(z(s[i])) cur++;
            if(z(s[i-k])) cur--;
            ans = max(ans,cur);
            i++;
        }
        return ans;
    }
};
