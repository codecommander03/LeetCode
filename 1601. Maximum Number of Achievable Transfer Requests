class Solution {
public:
    int ans = 0;
    void help(vector<vector<int>>& req,vector<int>& v,int ind,int done){
        if(ind == req.size()){
            for(int &i: v) if(i!=0) return;

            ans = max(ans,done);
            return;
        }
        help(req,v,ind+1,done);

        v[req[ind][0]]--;
        v[req[ind][1]]++;

        help(req,v,ind+1,done+1);

        v[req[ind][0]]++;
        v[req[ind][1]]--;
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> v(n,0);
        help(requests,v,0,0);
        return ans;
    }
};
