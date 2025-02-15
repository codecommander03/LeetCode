class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),mod = 1e9 + 7;
        vector<int> pow(n,1);
        for(int i=1;i<n;i++){
            pow[i] = (pow[i-1]*2)%mod;
        }
        int ans = 0;
        int l=0,r=n-1;
        while(l<=r){
            if(nums[l]+nums[r]>target) r--;
            else{
                ans = (ans+pow[r-l++])%mod;
            }
        }
        return ans;
    }
};
