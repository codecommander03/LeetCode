class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0,n=nums.size(),prev = -1000;
        while(j<n){
            if(nums[j] != prev){
                nums[i] = nums[j];
                prev = nums[j];
                i++;
            }
            j++;
        }
        return i;
    }
};
