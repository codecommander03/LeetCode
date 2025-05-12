class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;
            m1[nums2[i]] = 0;
        }
        for(int i=0;i<nums1.size();i++){
            m2[nums1[i]] = 0;
        }
        vector<vector<int>> ans(2);
        for(auto &i: m1){
            if(i.second>0) ans[0].emplace_back(i.first);
        }
        for(auto &i: m2){
            if(i.second>0) ans[1].emplace_back(i.first);
        }
        return ans;
    }
};
