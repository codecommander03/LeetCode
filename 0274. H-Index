class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> dp(n+1);
        for(int i: citations){
            dp[min(i,n)]++;
        }
        int ans = 0,sum=0;
        for(int i=n;i>=0;i--){
            sum+=dp[i];
            if(sum>=i) ans = max(ans,i);
        }
        return ans;
    }
};
