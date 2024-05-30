class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i: nums1){
            m[i]++;
        }
        for(int i: nums2){
            if(m[i]>0){
                v.emplace_back(i);
            }
            m[i]--;
        }
        return v;
    }
};
