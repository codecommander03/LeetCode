class Solution {
public:
    long long cal(int len,int val){
        long long sum = 0;
        if(len >= val){
            sum = (long long)val*(val+1)/2 + (len-val);
        }
        else{
            long long rem = val - len;
            sum = (long long)val*(val+1)/2 - (long long)rem*(rem+1)/2;
        }
        return sum;
    }
    int maxValue(int n, int index, int maxSum) {
        int l=1,r=maxSum,ans = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(cal(index,mid-1) + mid + cal(n-index-1,mid-1)<=maxSum){
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        return ans;
    }
};
