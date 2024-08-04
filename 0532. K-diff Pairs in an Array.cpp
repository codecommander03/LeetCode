class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i: nums) m[i]++;
        int ans = 0;
        for(auto &[a,b]: m){
            if(k==0){
                if(b>1) ans++;
            }
            else{
                if(m.count(a-k)) ans++;
                if(m.count(a+k)) ans++;
            }
        }
        return k ? ans/2 : ans;
    }
};
