class Solution {
public:
    int firstUniqChar(string s) {
        /*unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==-1) continue;
            if(m.count(s[i])>0) m[s[i]] = -1;
            else m[s[i]] = i;
        }
        for(auto i: m){
            if(i.second!=-1){
                return i.second;
            }
        }*/
        int n=s.size();
        if(n==1) return 0;
        vector<int> v(26,-1);
        for(int i=0;i<n;i++){
            if(v[s[i]-'a']==-1) v[s[i]-'a'] = i;
            else if(v[s[i]-'a']==-2) continue;
            else v[s[i]-'a'] = -2;

        }
        int ans = -1;
        for(int i: v){
            if(i>=0){
                if(ans==-1) ans = i;
                else ans = min(ans,i);
            } 
        }
        return ans;
    }
};
