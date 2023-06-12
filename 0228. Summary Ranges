class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        vector<string> ans;
        while(i<n){
            int j=i;
            string s = to_string(nums[i]);
            while(++j<n){
                if(nums[j]!=nums[j-1]+1) break;
            }
            if(j-1 != i){
                s = s + "->" + to_string(nums[j-1]);
            }
            ans.emplace_back(s);
            i = j;
        }
        return ans;
    }
};
