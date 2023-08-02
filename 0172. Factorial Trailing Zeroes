class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5) return 0;
        int ans = 0;
        for(int i=5;i<=n;i+=5){
            int x = i;
            while(x%5==0){
                ans++;
                x/=5;
            }
        }
        return ans;
    }
};
