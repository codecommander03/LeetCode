class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> ans;
        for(int i=0;i<(1<<n);i++){
            ans.push_back(i^(i>>1));
        }
        while(*ans.begin() != start){
            ans.push_back(ans[0]);
            ans.erase(ans.begin());
        }
        return ans;
    }
};
