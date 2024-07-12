class Solution {
public:
    long long dp[20][20][2];
    int n;
    int mem(int l,int r,int turn,vector<int>& nums){
        if(l==n || r==-1 || l>r) return 0;
        if(dp[l][r][turn] != -1e9) return dp[l][r][turn];
        if(turn==0){
            return dp[l][r][turn] = max(nums[l]+mem(l+1,r,1,nums),nums[r]+mem(l,r-1,1,nums));
        }
        else{
            return dp[l][r][turn] = min(-nums[l]+mem(l+1,r,0,nums),-nums[r]+mem(l,r-1,0,nums));
        }
    }
    bool PredictTheWinner(vector<int>& nums) {
        n = nums.size();
        //memset(dp,-1e9,sizeof(dp));
        for(int i=0;i<20;i++){
            for(int j=0;j<20;j++){
                dp[i][j][0] = dp[i][j][1] = -1e9;
            }
        }
        return mem(0,n-1,0,nums)>=0;
    }
};
