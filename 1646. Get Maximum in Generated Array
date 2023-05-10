class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        if(n<=2) return 1;
        vector<int> v(n+1,1);
        v[0]=0;
        int ans = 1;
        for(int i=3;i<=n;i++){
            if(i%2) v[i] = v[i/2] + v[i/2 + 1];
            else v[i] = v[i/2];
            ans = max(ans,v[i]);
        }
        return ans;
    }
};
