class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long t = 0;
        int n=nums.size();
        vector<int> ans(n,-1);
        if(2*k>=n) return ans;
        for(int i=0;i<=2*k;i++) t+=nums[i];
        ans[k] = t/(2*k+1);
        for(int i=k+1;i<n-k;i++){
            t = t + nums[i+k] - nums[i-k-1];
            ans[i] = t/(2*k+1);
        }
        return ans;
    }
};
