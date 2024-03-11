class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans,cnt=0;
        for(int&i: nums){
            m[i]++;
            if(m[i]>cnt){
                cnt = m[i];
                ans = i;
            }
        }
        return ans;
    }
};
