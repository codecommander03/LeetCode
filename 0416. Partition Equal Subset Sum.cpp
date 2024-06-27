class Solution {
public:
    bool canPartition(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int n = nums.size();
        int sum=0;
        for(int i: nums){
            sum+=i;
        }
        if(sum%2) return false;
        vector<vector<int>> dp(n+1,vector<int>(sum+1));

        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0){
                    dp[i][j] = 0;
                    continue;
                }
                if(j==0){
                    dp[i][j]= 1;
                    continue;
                }


                if(j-nums[i-1]<0){ // if we cant take current element, then value at dp[i][j] is that of previous element with same sum i.e., dp[i-1][j]
                    dp[i][j] = dp[i-1][j];
                }
                else{ // else taking value, dp[i][j] will be equal to value at previous element with sum-current element i.e, dp[i-1][j-nums[i-1]] or value at prev element with same sum
                    dp[i][j] = dp[i-1][j] | dp[i-1][j-nums[i-1]];
                }
            }
        }
        //if(dp[n][sum]) return true;
        //return false;
        return dp[n][sum/2];
    }
};
