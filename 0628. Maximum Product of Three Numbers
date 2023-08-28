class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n = nums.size();
        int res = nums[n-1] * nums[n-2] * nums[n-3];
        res = max(res,nums[0] * nums[1] * nums[n-1]);
        return res;
    }
};
