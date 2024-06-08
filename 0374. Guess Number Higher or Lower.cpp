class Solution {
public:
    int guessNumber(int n) {
        int l=1,r=n;
        while(l<=r){
            int mid = l + (r-l)/2;
            int x = guess(mid);
            if(x==0) return mid;
            else if(x==-1) r = mid-1;
            else l = mid+1;
        }
        return -1;
    }
};
