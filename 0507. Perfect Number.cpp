class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0) sum += (i + num/i);
        }
        return sum>1 && sum==num;
    }
};
