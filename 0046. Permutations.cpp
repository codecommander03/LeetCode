class Solution {
public:
    void helper(int curr,vector<int> &nums,vector<vector<int>> &ans,vector<int> &visited,vector<int> &temp){
        if(curr==nums.size()) ans.emplace_back(temp);

        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                temp.emplace_back(nums[i]);
                visited[i] = 1;
                helper(curr+1,nums,ans,visited,temp);

                //Backtracking
                visited[i] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> visited(n,0);
        vector<int> temp;
        helper(0,nums,ans,visited,temp);
        return ans;
    }
};
