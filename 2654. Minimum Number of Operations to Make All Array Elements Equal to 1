class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int one=0;
        int g=nums[0];
        for(int i=0;i<n;i++) one+=(nums[i]==1);
        if(one) return n-one;
        for(int i=1;i<n;i++){
            g = gcd(g,nums[i]);
        }
        if(g!=1) return -1;

        int cnt=0;
        int ans=1e9;
        for(int i=0;i<n;i++){
            g=nums[i];
            for(int j=i+1;j<n;j++){
                g = gcd(g,nums[j]);
                if(g==1) ans=min(ans,(j-i)+n-1);
            }
        }
        return ans;
    }
};
