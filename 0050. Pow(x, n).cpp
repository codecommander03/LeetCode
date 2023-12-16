class Solution {
public:
    double myPow(double x, int n) {
        if(x==1 || n==0) return 1;
        
        double ans = myPow(x,n/2);
        ans *= ans;

        if(n%2==0) return ans;

        else{
            if(n<0){
                return ans*(1.0/x);
            }
            return ans*x;
        }
    }
};
