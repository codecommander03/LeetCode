class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int n = nums.size();
        int ans = n+1;

        int sum=0;
        
        while(i < n){
            if(ans==1) return 1;

            sum += nums[i];
            
            if(sum>=target){
                while(sum>=target){
                    sum -= nums[j++];
                }
                ans = min(ans,i-j+2);
            }
            i++;
        }
        return ans%(n+1);
    }
};
