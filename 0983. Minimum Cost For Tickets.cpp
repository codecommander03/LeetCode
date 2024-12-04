class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n =*days.rbegin();
        int a=costs[0],b=costs[1],c =costs[2];
        vector<int> v(n+1,0);
        unordered_set<int> s(begin(days),end(days));

        for(int i=1;i<=n;i++){
            if(s.find(i)!=s.end()){
                v[i] = min(v[i-1]+a, min( v[max(0,i-7)]+b,v[max(0,i-30)]+c) );
            }
            else v[i]=v[i-1];
        }
        return v[n];
    }
};
