class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans;
        int n = s.size();
        for(auto &st: dictionary){
            int i=-1,j=0;
            while(++i<n && j<st.size()){
                if(s[i]==st[j]) j++;
            }
            if(j!=st.size()) continue;
            if(j>ans.size()) ans = st;
            else if(j==ans.size() && st<ans) ans = st;
        }
        return ans;
    }
};
