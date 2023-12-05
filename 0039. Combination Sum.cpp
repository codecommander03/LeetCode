class Solution {
public:
    void cal(vector<vector<int>> &ans,vector<int> &nums,vector<int> &temp,int sum,int si,int target){
        if(sum==target) ans.emplace_back(temp);

        for(int i=si;i<nums.size();i++){
            if(sum+nums[i]<=target){
                temp.emplace_back(nums[i]);
                cal(ans,nums,temp,sum+nums[i],i,target);

                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;

        vector<int> temp;
        cal(ans,candidates,temp,0,0,target);
        return ans;
    }
};
