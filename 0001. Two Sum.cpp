class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> v={0,1};
        for(int i=1;i<nums.size();i++){
            if(m[target-nums[i]]!=0 || target-nums[i]==nums[0]){
                v = {m[target-nums[i]],i};
                break;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};
