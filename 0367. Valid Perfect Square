class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        for(int i=1;i<num;i++){
            double t = 1.0*num/i;
            if(t==i) return true;
            if(i>t) break;
        }
        return false;
    }
};
