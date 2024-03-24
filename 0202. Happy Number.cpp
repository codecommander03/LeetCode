class Solution {
public:
    int cal(int n){
        int res=0;
        while(n>0){
            res+=pow(n%10,2);
            n/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        while(n>=10){
            n=cal(n);
        }
        if(n==1 || n==7) return true;
        else return false;
    }
};
