class Solution {
public:
    int n,ans=INT_MAX;
    vector<int> v;
    void help(int index,vector<int>& cookies, int k){
        if(index==n){
            ans = min(ans, *max_element(v.begin(),v.end()) );
            return;
        }
        for(int i=0;i<k;i++){
            v[i] += cookies[index];
            help(index+1,cookies,k);
            v[i] -= cookies[index];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        n = cookies.size();
        v = vector<int>(k,0);
        help(0,cookies,k);
        return ans;
    }
};
