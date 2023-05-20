class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        int n = beans.size();
        
        long long ans=1e16,sum = 0;
        for(int &i: beans) sum += 1LL*i;

        for(int i=0;i<n;i++){
            ans = min(ans,sum-1LL*(n-i)*beans[i]);
        }
        return ans;
    }
};
