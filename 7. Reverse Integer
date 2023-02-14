https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        if(x<0){
            string s = to_string(x);
            if(x<=-2147483647) return 0;
            string ans = "";
            int y=0;
            for(int i=s.size()-1;i>0;i--){
                ans+=s[i];
            }
            stringstream geek(ans);
            geek>>y;
            y *= -1;
            if(y<=-2147483647) return 0;
            return y;
        }
        else{
            string s = to_string(x);
            if(x>=1534236469) return 0;
            string ans = "";
            int y=0;
            for(int i=s.size()-1;i>-1;i--){
                ans += s[i];
            }
            stringstream geek(ans);
            geek>>y;
            //y %= 1534236469;
            return y;
        }
    }
};
