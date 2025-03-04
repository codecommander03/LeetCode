class Solution {
public:
    int n;
    const int mod = 1e9+7;
    vector<vector<int>> dp;
    int help(int st,int en,vector<int>&loc,int fuel){
        if(fuel<0) return 0;
        //if(st==en) return 1;
        int &ans = dp[st][fuel];
        if(ans != -1) return ans;
        ans = 0;
        if(st==en) ans=1;
        for(int i=0;i<n;i++){
            if(i != st && fuel - abs(loc[i]-loc[st])>=0){
                ans = (ans+help(i,en,loc,fuel - abs(loc[i]-loc[st])))%mod;
            }
        }
        return ans;
    }
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        n = locations.size();
        dp = vector<vector<int>>(101,vector<int>(201,-1));
        return help(start,finish,locations,fuel);
    }   
};
