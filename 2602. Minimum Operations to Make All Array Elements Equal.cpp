class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<long long> pre(n+1);
        for(int i=0;i<n;i++){
            pre[i+1] = pre[i]+(long long)nums[i];
        }
        vector<long long> ans;
        for(int q: queries){
            int ind = lower_bound(nums.begin(),nums.end(),q)-nums.begin();
            long long l=1LL*ind*q-pre[ind]; // steps to calculate number smaller then q
            long long r = pre[n]-pre[ind]-1LL*(n-ind)*q; // for number biiger than q
            ans.push_back(l+r);
        }
        return ans;
    }
};
