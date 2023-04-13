class Solution {
public:
    int n;
    void back(vector<int> &nums,vector<vector<int>>& ans,int index,vector<int>& temp){
        if(index==n){
            ans.emplace_back(temp);
            return;
        }
        temp.emplace_back(nums[index]);
        back(nums,ans,index+1,temp);
        temp.pop_back();
        back(nums,ans,index+1,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        back(nums,ans,0,temp);
        return ans;
    }
};
