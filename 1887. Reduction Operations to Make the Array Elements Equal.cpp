class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        vector<int> freq(50001,0);
        for(int &i: nums) freq[i]++;

        int ans = 0;
        int cnt = 0;

        for(int i=50000;i>0;i--){
            if(freq[i]){
                ans += cnt;
                cnt += freq[i];
            }
        }
        return ans;
    }
};
