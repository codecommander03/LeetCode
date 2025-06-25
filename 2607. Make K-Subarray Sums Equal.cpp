class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        int n = arr.size();
        long long ans = 0;
        int r = gcd(n,k);
        vector<long long> final(r);
        for(int i=0;i<r;i++){
            vector<int> temp;
            for(int j=i;j<n;j+=r) temp.emplace_back(arr[j]);
            sort(temp.begin(),temp.end());
            final[i] = temp[temp.size()/2];
        }
        for(int i=0;i<n;i++) ans += abs(arr[i] - final[i%r]);
        return ans;

    }
