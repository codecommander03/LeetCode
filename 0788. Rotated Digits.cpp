class Solution {
public:
    int rotatedDigits(int n) {
        int m[] = {1,1,2,0,0,2,2,0,1,2};
        int ans = 0;
        for(int i=1;i<=n;i++){
            int num = i,cnt = 1;
            while(num){
                cnt *= m[num%10];
                num /= 10;
            }
            if(cnt>=2) ans++;
        }
        return ans;
    }
};
