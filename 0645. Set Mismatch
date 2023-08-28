class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int rep = 0, x = 0;
        vector<int> v(n+1,0);
        for(int i=0;i<n;i++){
            if(v[nums[i]]==1){
                rep = nums[i];
            }
            v[nums[i]] = 1;
            x ^= (i+1) ^ (nums[i]) ;
        }
        return {rep,x^rep};
    }
};
