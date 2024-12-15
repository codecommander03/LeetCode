class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string s = "";
        while(n){
            s = ((n&1) ? "1" : "0") + s;
            n = -(n>>1);
        }
        return s;
    }
};
