class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
        int n = nums.size();
        if(k==0) return nums[0];
        if(n==1 && k%2==1) return -1;

        int ans = -1;
        int i=0;
        while(i<n && k>1){
            ans = max(ans,nums[i]);
            i++;
            k--;
        }
        //if(n-i<=1) return ans;
        if(n-i>1 && nums[i+1]>ans) return nums[i+1];
        return ans; 
    }
};
