class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.size();
        if(goal.size() != n) return false;
        vector<vector<int>> m(26);
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i] != goal[i]) v.push_back(i);
            m[s[i]-'a'].push_back(i);
        }
        if(v.size()==2){
            swap(s[v[0]],s[v[1]]);
            if(s == goal) return true;
        }
        if(v.size()==0){
            for(int i=0;i<26;i++){
                if(m[i].size()>=2) return true;
            }
        }
        return false;
    }
};
