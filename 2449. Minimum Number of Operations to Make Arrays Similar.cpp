class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        long long ans = 0;
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        vector<int> v1,v2;
        for(int i: nums) if(i%2==0) v1.push_back(i);
        for(int i: target) if(i%2==0) v2.push_back(i);
        for(int i=0;i<v2.size();i++){
            if(v2[i] > v1[i]) ans += (v2[i] - v1[i]) / 2;
        }
        v1.clear();
        v2.clear();
        for(int i: nums) if(i%2) v1.push_back(i);
        for(int i: target) if(i%2) v2.push_back(i);
        for(int i=0;i<v2.size();i++){
            if(v2[i] > v1[i]) ans += (v2[i] - v1[i]) / 2;
        }
        return ans;
    }
};
