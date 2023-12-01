class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int l=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                l = i;
                break;
            }
        }
        if(l==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        int r=l+1;
        for(int i=r;i<n;i++){
            if(nums[i]>nums[l]) r = i;
        }
        swap(nums[l],nums[r]);
        reverse(nums.begin()+l+1,nums.end());

    }
};
