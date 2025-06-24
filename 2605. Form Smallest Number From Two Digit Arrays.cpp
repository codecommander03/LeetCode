class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int m1=1e9,m2=1e9;
        int ans = 1e9;
        for(int i: nums1){
            m1=min(m1,i);
            for(int j: nums2){
                if(i==j) ans = min(ans,i);
                m2=min(m2,j);
            }
        }
        if(ans!=1e9) return ans;
        return (10*min(m1,m2)+max(m1,m2));
    }
};
