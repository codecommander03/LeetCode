class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        int l=0,r=0;
        for(int i=0;i<n;i++){
            prefix[i]=l;
            suffix[n-i-1] = r;
            l+=nums[i];
            r+=nums[n-i-1];
        }
        for(int i=0;i<n;i++){
            prefix[i]=abs(prefix[i]-suffix[i]);
        }
        return prefix;
    }
};
