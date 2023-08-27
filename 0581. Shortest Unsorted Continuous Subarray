class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int begin=-1,end=-2;
        int miv=nums[n-1],mav=nums[0];
        for(int i=1;i<n;i++){
            miv=min(miv,nums[n-1-i]);
            mav=max(mav,nums[i]);
            if(nums[i]<mav) end=i;
            if(nums[n-1-i]>miv) begin = n-i-1;
        }
        return end-begin+1;
    }
};
