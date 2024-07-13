class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        int n = nums2.size();
        for(int i=0;i<n;i++){
            int num=nums2[i];
            for(int j=i+1;j<n;j++){
                if(nums2[j]>num){
                    num=nums2[j];
                    break;
                }
            }
            if(num==nums2[i] && m.count(nums2[i])==0) m[nums2[i]]=-1;
            else{
                m[nums2[i]] = num;
            }
        }
        for(int &i: nums1){
            i = m[i];
        }
        return nums1;
    }
};
