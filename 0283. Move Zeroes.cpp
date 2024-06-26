class Solution {
public:
    void swap(vector<int> &nums,int &a,int &b){
        nums[a] += nums[b];
        nums[b] = nums[a] - nums[b];
        nums[a] -= nums[b];
    }
    void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        int n = nums.size();
        while(l<n){
            if(nums[l]==0) break;
            l++;
        }
        if(l==n-1) return;
        r=l+1;
        while(r<n){
            if(nums[r]!=0){
                swap(nums,l,r);
                while(l<=r){
                    if(nums[l]==0) break;
                    l++;
                }
            }
            r++;
        }
    }
};
