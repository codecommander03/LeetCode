class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int res=0;
        int n = strs.size();
        for(int i=0;i<min(strs[0].size(),strs[n-1].size());i++){
            if(strs[0][i]!=strs[n-1][i]){
                break;
            }
            res++;
        }
        //cout<<res;
        return strs[0].substr(0,res);
    }
};
