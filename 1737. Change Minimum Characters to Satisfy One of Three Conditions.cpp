class Solution {
public:
    int count(string &a,string &b){
        int ans = INT_MAX;
        for(char c='a';c<'z';c++){
            int cnt = 0;
            for(char i: a) cnt += (i>c);
            for(char i: b) cnt += (i<=c);
            ans = min(ans,cnt);
        }
        return ans;
    }
    int minCharacters(string a, string b) {
        int ans = INT_MAX;

        for(char c='a';c<='z';c++){
            int cnt = 0;
            for(char i: a) cnt += (i!=c);
            for(char i: b) cnt += (i!=c);
            ans = min(ans,cnt);
        }
        return min(ans,min(count(a,b),count(b,a)));
    }
};
