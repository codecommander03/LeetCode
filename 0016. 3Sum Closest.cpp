class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int closest=100000;
        for(int i=0;i<n-2;i++){
            int x = nums[i];
            int l = i+1,r=n-1;
            while(l<r){
                int sum = x + nums[l]+nums[r];
                if(sum==target) return sum;
                if(abs(target-sum)<abs(target-closest)) closest = sum;
                if(sum-target>0) r--;
                else l++;
            }
        }
        return closest;
    }
};
