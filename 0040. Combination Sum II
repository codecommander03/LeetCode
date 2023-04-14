class Solution {
public:
    int n;
    vector<vector<int>> ans;
    void solve(vector<int>& nums,int target,int sum,vector<int>& temp,int index){
        if(sum==target){
            ans.emplace_back(temp);
            return;
        }
        if(sum>target || index==n) return;
        temp.emplace_back(nums[index]);
        solve(nums,target,sum+nums[index],temp,index+1);
        temp.pop_back();
        index++;
        while(index < n && nums[index]==nums[index-1]) index++;
        solve(nums,target,sum,temp,index);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        n = candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        solve(candidates,target,0,temp,0);
        return ans;
    }
};
