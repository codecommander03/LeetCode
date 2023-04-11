class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN){
            if(divisor==1) return INT_MIN;
            if(divisor==-1) return INT_MAX;
        }

        long int ld=abs(dividend),ls=abs(divisor);
        int ans=0;
        while(ls<=ld){
            long int mul=ls,temp=1;
            while(mul<=ld-mul){
                mul += mul;
                temp+= temp;
            }
            ans+=temp;
            ld -= mul;
        }

        if(divisor<0 && dividend>0 || divisor>0 && dividend<0) return -ans;

        return ans;
    }
};
