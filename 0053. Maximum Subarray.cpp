class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int delta=0,max=INT_MIN;
        for(int i=0;i<n;i++){
            delta+=nums[i];
            if(delta>max) max=delta;
            if(delta<0) delta=0;
        }
        return max;
    }
};
