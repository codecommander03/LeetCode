class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size()-1;
        int l=1,r=n;
        while(l<=r){
            int mid = l+(r-l)/2;
            int cnt=0;
            for(int i: nums){
                cnt+=(i<=mid);
            }
            if(cnt<=mid) l=mid+1;
            else r = mid-1;
        }
        return l;
    }
};
