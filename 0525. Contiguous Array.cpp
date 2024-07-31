class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        m[0] = -1;
        int one=0,zero=0,ans=0;
        for(int i=0;i<nums.size();i++){
            nums[i] ? one++ : zero++;
            m.count(one-zero) ? ans = max(ans,i-m[one-zero]) : m[one-zero] = i;
        }
        return ans;
    }
};
