class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<=2) return true;
        long long l=0,r=sqrt(c)+1;
        while(l<=r){
            long long x = l*l + r*r;
            if(x<c) l++;
            else if(x>c) r--;
            else return true;
        }
        return false;
    }
};
