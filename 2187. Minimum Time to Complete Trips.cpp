https://leetcode.com/problems/minimum-time-to-complete-trips/

class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        long long l = 1,r = 1e14;
        while(l<=r){
            long long mid = l + (r-l)/2;
            long long trips = 0;
            for(int i: time){
                trips += mid/i;
                if(trips>totalTrips) break;
            }
            if(trips < totalTrips) l = mid + 1;
            else r = mid-1;
        }
        return l;
    }
};
