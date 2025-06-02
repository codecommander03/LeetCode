class Solution {
public:
    long long sum(vector<int>& nums, vector<int>& cost,int x){
        long long res = 0;
        for(int i=0;i<nums.size();i++){
            res+=cost[i]*abs((long long)x-nums[i]);
        }
        return res;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int l = INT_MAX,r=INT_MIN;
        int n = nums.size();
        for(int i: nums){
            l=min(l,i);
            r=max(r,i);
        }
        while(l<r){
            int mid = l + (r-l)/2;
            long long left = sum(nums,cost,mid);
            long long right = sum(nums,cost,mid+1);
            if(left>right){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        return sum(nums,cost,l);
    }
};
