class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0,j=n/2;
        vector<int> ans;
        for(int k=0;k<n;k++){
            if(k%2){
                ans.emplace_back(nums[i]);
                i++;
            }
            else{
                ans.emplace_back(nums[j]);
                j++;
            }
        }
        return ans;
    }
};
