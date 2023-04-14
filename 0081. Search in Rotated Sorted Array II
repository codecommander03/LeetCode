class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r= nums.size()-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[l]==target || nums[m]==target || nums[r] == target) return true;

            if(nums[m] > target) l++;

            r--;
        }
        return false;
    }
};
