class Solution {
public:
    bool lcs(string &a,string &b){
        if(a.size() > b.size()) return false;
        int i=0;
        for(char c: b){
            if(i < a.size() && a[i]==c) i++;
        }
        return i==a.size();
    }
    int findLUSlength(vector<string>& strs) {
        if(strs.empty()) return -1;
        int res = -1,n = strs.size();
        for(int i=0;i<n;i++){
            int j=0;
            for(;j<n;j++){
                if(i == j) continue;
                if(lcs(strs[i],strs[j])) break;
            }
            if(j==n) res=max(res,(int)strs[i].size());
        }
        return res;
    }
};
