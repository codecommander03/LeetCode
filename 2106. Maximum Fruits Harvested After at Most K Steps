class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        const int N = 2e5;
        vector<int> pre(N+2,0);
        for(auto it: fruits){
            pre[it[0]+1] = it[1];
        }
        int l,r;
        startPos++;
        for(int i=1;i<=N+1;i++) pre[i] += pre[i-1];
        int ans = 0;
        for(int l=startPos;l>0 && l>=startPos-k;l--){
            r = max(startPos,startPos + k - 2*(startPos-l) );
            r = min(N+1,r);
            ans = max(ans,pre[r]-pre[l-1]);
        }
        for(int r=startPos;r<N+2 && r<=startPos+k;r++){
            l = min(startPos,startPos - k + 2*(r-startPos));
            l = max(1,l);
            ans=max(ans,pre[r]-pre[l-1]);
        }
        return ans;
    }
};
