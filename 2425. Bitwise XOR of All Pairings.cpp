static const int __ = []() { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return 0; }();

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(),n2 = nums2.size();
        int ans = 0;
        if(n1%2){
            for(int &i: nums2) ans ^= i;
        }
        if(n2%2){
            for(int &i: nums1) ans ^= i;
        }
        return ans;
    }
};
