class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        long long l = 1, r = m*n;
        while(l < r){
            long long mid = (r-l)/2 + l;
            
            long long tmp = 0;
            for(int i=1;i<=m;i++){
                if(mid >= i*n){
                    tmp += n;
                }
                else{
                    tmp += (mid/i);
                }
            }

            if(tmp >= k){
                r = mid;
            }
            else l = mid+1;
        }
        return l;
    }
};
