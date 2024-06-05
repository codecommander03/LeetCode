class Solution {
public:
    int getSum(int a, int b) {
        //return a+b
        if(!b) return a;
        return getSum(a^b,(unsigned int)(a&b)<<1);
    }
};
