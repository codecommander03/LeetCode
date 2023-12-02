class Solution {
public:
    int binary(vector<int>nums,int l,int r,int target){
        if(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]== target) return mid;
            if(nums[mid] > target){
                return binary(nums,l,mid-1,target);
            }
            if(nums[mid] < target){
                return binary(nums,mid+1,r,target);
            }
        }
        if(nums[l]>target) return l;
        return l+1;
    }
    int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0]) return 0;
        if(target > nums[nums.size()-1]) return nums.size();
        return binary(nums,0,nums.size()-1,target);
    }
};
