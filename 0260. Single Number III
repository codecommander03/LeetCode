class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long res = 0;
        for(auto i: nums) res ^= i;
        long long mask = (res & (res-1)) ^ res;
        int a=0,b=0;
        for(auto i: nums){
            (i&mask) ? a^=i : b^=i;
        }
        return {a,b};
    }
};
