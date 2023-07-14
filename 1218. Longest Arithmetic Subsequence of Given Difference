class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n = arr.size();
        unordered_map<int,int> m;;
        int ans = 1;
        for(int i=0;i<n;i++){
            if(m.find(arr[i]-difference) != m.end()){
                m[arr[i]] = 1 + m[arr[i]-difference];
                ans = max(ans,m[arr[i]]);
            }
            else m[arr[i]] = 1;
        }
        return ans;
    }
};
