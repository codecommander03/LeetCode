class Solution {
public:
    int reachNumber(int target) {
        int n = 1;
        target = abs(target);
        while(target>=n){
            target -= n;
            n++;
        }
        if(target==0) return n-1;

        if((n-target)%2==0) return n;
        else{
            if((n+1)%2==1) return n+1;
            else return n+2;
        }
    }
};
