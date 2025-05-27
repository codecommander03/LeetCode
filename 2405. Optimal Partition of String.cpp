const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();


class Solution {
public:
    int partitionString(string &s) {
        unordered_map<char,bool> m;
        int ans=1;
        for(char c: s){
            if(m[c]==1){
                ans++;
                m.clear();
            }
            m[c]=1;
        }
        return ans;
    }
};
