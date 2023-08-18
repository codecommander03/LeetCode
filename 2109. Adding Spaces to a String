class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int ind = 0;
        for(int i=0;i<s.size();i++){
            if(ind<spaces.size() && spaces[ind]==i) ans.push_back(' '),ind++;
            ans.push_back(s[i]);
        }
        return ans;
    }
};
