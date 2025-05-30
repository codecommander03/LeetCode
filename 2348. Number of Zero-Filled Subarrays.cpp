static auto _______ = [](){
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    std::cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long count=0;
        for(int i: nums){
            if(i==0) count++;
            else{
                ans+=count*(count+1)/2;
                count=0;
            }
        }
        if(count) ans+=count*(count+1)/2;
        return ans;
    }
};
