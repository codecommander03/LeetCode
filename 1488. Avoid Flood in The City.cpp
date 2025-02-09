class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> res(n,-1);
        unordered_map<int,int> m;
        set<int> s;
        for(int i=0;i<rains.size();i++){
            if(!rains[i]) s.insert(i);
            else{
                if(m.find(rains[i])==m.end()) m[rains[i]] = i;
                else{
                    int prev = m[rains[i]];
                    auto it = s.upper_bound(prev);
                    if(it==s.end()) return {};
                    res[*it] = rains[i];
                    m[rains[i]] = i;
                    s.erase(it);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(rains[i]==0 && res[i]==-1) res[i] = 1;
        }
        return res;
    }
};
