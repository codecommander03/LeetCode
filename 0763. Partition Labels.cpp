class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int n = s.size();
        unordered_map<char,int> m;
        for(int i=0;i<n;i++) m[s[i]] = i;
        int prev=-1,ma=0;
        for(int i=0;i<n;i++){
            ma = max(ma,m[s[i]]);
            if(ma==i){
                ans.push_back(i-prev);
                prev = i;
            }
        }
        return ans;
    }
};
