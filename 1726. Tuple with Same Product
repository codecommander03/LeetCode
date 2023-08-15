class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                m[nums[i]*nums[j]]++;
            }
        }
        int ans = 0;
        for(auto &[a,b]: m) ans += b*(b-1)/2;
        //for(auto i: m) ans += i.second*(i.second-1)/2;
        return 8*ans;
    }
};
