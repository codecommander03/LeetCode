class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int64_t> v(n,0);
        int ans = 0;
        for(int i=0;i<n;i++){
            for(char c: words[i]){
                v[i] |= 1 << (c-'a');
            }
            for(int j=i-1;j>=0;j--){
                if(!(v[i]&v[j])) ans = max(ans,int(words[i].size() * words[j].size()));
            }
        }
        return ans;
    }
};
