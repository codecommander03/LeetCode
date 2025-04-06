class Solution {
public:
    vector<vector<int>> dp;
    int maxValue(vector<vector<int>>& events, int k) {
        int n = events.size();
        sort(events.begin(),events.end());
        dp.resize(n,vector<int>(k+1,-1));
        return solve(events,0,k,0);
    }

    int solve(vector<vector<int>>&events,int i,int k,int end){
        if(i==events.size() || k==0) return 0;

        if(events[i][0] <= end) return solve(events,i+1,k,end);

        if(dp[i][k] != -1) return dp[i][k];

        return dp[i][k] = max(events[i][2]+solve(events,i+1,k-1,events[i][1]),solve(events,i+1,k,end));
    }
};
