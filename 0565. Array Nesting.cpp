class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size(),ans = 0;
        for(int i=0;i<n;i++){
            int temp = 0;
            for(int j=i;nums[j]>=0;temp++){
                int k = nums[j];
                nums[j] = -1;
                j = k;
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};
