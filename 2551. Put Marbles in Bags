class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<long long> v;
        for(int i=0;i<n-1;i++){
            v.push_back(weights[i]+weights[i+1]);
        }
        sort(v.begin(),v.end());
        long long ans = 0;
        n--;
        k--;
        for(int i=0;i<k;i++){
            ans += v[n-1-i];
            ans -= v[i];
        }
        return ans;
    }
};
