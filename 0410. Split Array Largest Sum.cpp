class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long l = 0,r = 0;
        for(int i: nums){
            l = max(l,1LL*i);
            r += i;
        }
        int ans = r;
        while(l<=r){
            long long mid = l + (r-l)/2;
            long long cnt = 0,sum=0;
            for(int i=0;i<n;i++){
                if(sum+nums[i]<=mid) sum += nums[i];
                else{
                    sum = nums[i];
                    cnt++;
                }
            }
            cnt++;
            if(cnt<=k){
                r = mid-1;
                ans = min(ans,(int)mid);
            }
            else l = mid+1;
        }
        return ans;
    }
};
