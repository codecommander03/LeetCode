class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x = nums[0];
        int n = nums.size()-1;
        int l = 0,r=nums.size()-1;

        while(l < r){
            int mid = l + (r-l)/2;
            if(mid%2){
                if(nums[mid]!=nums[mid+1]) l = mid+1;
                else r = mid;
            }
            else{
                if(nums[mid]==nums[mid+1]) l=mid+1;
                else r = mid;
            }
        }
        return nums[l];
    }
};
