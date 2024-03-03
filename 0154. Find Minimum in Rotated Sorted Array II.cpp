class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l=0,r=n-1;
        int mini=INT_MAX;
        if(n==1) return nums[0];
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[l]==nums[mid]&&nums[mid]==nums[r]){
                mini=min(mini,nums[mid]);
                l++;
                r--;
            }
            else if(nums[l]<=nums[mid]){
                mini=min(mini,nums[l]);
                l = mid+1;
            }
            else{
                if(nums[mid]<=nums[r]){
                    mini=min(mini,nums[mid]);
                    r=mid-1;
                }
            }
        }
        return mini;
    }
};
