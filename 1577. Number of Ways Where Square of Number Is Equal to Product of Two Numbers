class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<long long,int> m1,m2;
        for(int i: nums1) m1[1LL*i*i]++;;
        for(int j: nums2) m2[1LL*j*j]++;
        int ans = 0;
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                ans += m2[1LL*nums1[i]*nums1[j]];
            }
        }
        for(int i=0;i<nums2.size()-1;i++){
            for(int j=i+1;j<nums2.size();j++){
                ans += m1[1LL*nums2[i]*nums2[j]];
            }
        }
        return ans;
    }
};
