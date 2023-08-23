class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) v[i] = {score[i],i};
        sort(begin(v),end(v));
        for(int i=0;i<n;i++){
            score[v[i].second] = n-i;
        }
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            if(score[i]==1) ans[i] = "Gold Medal";
            else if(score[i]==2) ans[i] = "Silver Medal";
            else if(score[i]==3) ans[i] = "Bronze Medal";
            else ans[i] = to_string(score[i]);
        }
        return ans;
    }
};
