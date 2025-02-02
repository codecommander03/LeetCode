class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> v(128,0);
        for(int i=0;i<26;i++){
            v[order[i]]=i;
        }
        
        for(int i=1;i<words.size();i++){
            bool flag = false;
            string s1 = words[i-1];
            string s2 = words[i];
            int minlen = min(s1.size(),s2.size());

            for(int j=0;j<minlen;j++){
                if(v[s1[j]] < v[s2[j]]){
                    flag = true;
                    break;
                }
                if(v[s1[j]] > v[s2[j]]){
                    return false;
                }
            }
            if(flag==false && s1.size()>s2.size()) return false;
        }
        return true;
    }
};
