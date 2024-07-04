class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        if(n==1) return 1;
        for(int i=1;i<=n;i++){
            if(1LL*i*(i+1)/2>n){
                ans = i;
                break;
            }
        }
        return ans-1;
    }
};
