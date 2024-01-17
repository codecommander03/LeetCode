class Solution {
public:
    int n;
    vector<vector<int>> ans;
    void solve(vector<int>& nums,vector<int>& temp,int index){
        
        if(index==n){
            ans.emplace_back(temp);
            return;
        }
        
        temp.emplace_back(nums[index]);
        solve(nums,temp,index+1);
        temp.pop_back();

        int j=index;
        while(j<n-1 && nums[j]==nums[j+1] ) j++;
        //if(j<n) solve(nums,temp,j+1);
        solve(nums,temp,j+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> temp;
        solve(nums,temp,0);
        return ans;
    }
};
