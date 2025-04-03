class Solution {
public:
    string maximumTime(string time) {
        string h = time.substr(0,2);
        string m = time.substr(3,2);

        if(h=="??"){
            h = "23";
        }
        else if(h[0]=='?'){
            if(h[1]-'0'<=3) h[0] = '2';
            else h[0] = '1';
        }
        else if(h[1]=='?'){
            if(h[0]-'0'<=1) h[1] = '9';
            else h[1] = '3';
        }

        if(m=="??") m = "59";
        else if(m[0]=='?') m[0] = '5';
        else if(m[1]=='?') m[1] = '9';

        return h+":"+m;
    }
};
