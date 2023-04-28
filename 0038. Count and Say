class Solution {
public:
    string s = "1";
    string countAndSay(int n) {
        if(n==1) return s;
        string tmp = "";
        char prev = s[0];
        int cnt = 0;
        for(char &c: s){
            if(c==prev) cnt++;
            else{
                tmp = tmp + to_string(cnt) + prev;
                prev = c;
                cnt = 1;
            }
        }
        tmp = tmp + to_string(cnt) + prev;
        s = tmp;
        return countAndSay(n-1);
    }
};
