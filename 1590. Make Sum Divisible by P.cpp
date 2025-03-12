class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int sum=0;
        for(int i: nums) sum = (sum + i) % p;
        unordered_map<int,int> m;
        m[0] = -1;
        int curr = 0,ans=n;
        for(int i=0;i<n;i++){
            curr = (curr + nums[i]) % p;
            m[curr] = i;
            int want = ((curr-sum)%p+p)%p;
            if(m.count(want)) ans = min(ans,i-m[want]);
        }
        return (ans<n) ? ans : -1;
    }
};
