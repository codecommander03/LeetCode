class Solution {
public:
    long long time(vector<int> &piles,int &k){
        long long time = 0;
        for(int i: piles){
            time += (i+k-1)/k;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r=1000000000;
        int ans=-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            //long long time_taken = time(piles,mid);
            if( time(piles,mid) <=h){
                ans = mid;
                r  = mid-1;
            } 
            else l = mid+1;
        }
        return ans;
    }
};
