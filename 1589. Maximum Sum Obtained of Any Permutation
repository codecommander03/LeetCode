class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n = nums.size();
        const int mod = 1e9+7;
        vector<int>fr(n,0);
        for(auto i: requests){
            fr[i[0]]++;
            if(i[1]<n-1) fr[i[1]+1]--;
        }
        for(int i=1;i<n;i++){
            fr[i] += fr[i-1];
        }
        sort(begin(fr),end(fr));
        sort(begin(nums),end(nums));
        long long ans = 0;
        for(int i=n-1;i>=0;i--){
            if(!fr[i]) break;
            ans = (ans + (1LL * fr[i] * nums[i])%mod)%mod;
        }
        return ans%mod;
    }
};
