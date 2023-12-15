class Solution {
public:
    int n;
    vector<vector<int>> ans;
    void solve(vector<int>& nums,vector<bool>& vis,vector<int>& temp){
        if(temp.size()==n){
            ans.emplace_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(vis[i] || i>0 && nums[i]==nums[i-1] && !vis[i-1]) continue;
            vis[i]=true;
            temp.emplace_back(nums[i]);
            solve(nums,vis,temp);

            vis[i]=false;
            temp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(),nums.end());
        vector<bool> vis(n);
        vector<int> temp;
        solve(nums,vis,temp);
        return ans;
    }
};
