class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1,m2;
        for(int i: nums1) m1[i] = 1;
        for(int i: nums2) m2[i] = 1;

        vector<int> ans;
        for(auto i: m1){
            if(m2.count(i.first)) ans.push_back(i.first);
        }
        return ans;
    }
};
