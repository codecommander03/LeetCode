class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        map<int,vector<int>>m;
        for(int i=0;i<n;i++) m[nums[i]].emplace_back(i);

        vector<bool> vis(n,false);

        for(auto &i: m){
            for(auto &j: i.second){
                if(vis[j]==false){
                    ans += i.first;
                    vis[j] = true;
                    if(j) vis[j-1] = true;
                    if(j<n-1) vis[j+1] = true;
                }
            }
        }

        return ans;
    }
};
