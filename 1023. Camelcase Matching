class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for(auto &s: queries){
            int i=0,j=0;
            string temp = "";
            while(i<s.size()){
                if(j<pattern.size() && s[i]==pattern[j]){
                    temp.push_back(s[i]);
                    i++;
                    j++;
                }
                else if(isupper(s[i])){
                    temp.push_back(s[i]);
                    i++;
                }
                else i++;
            }
            ans.push_back(temp==pattern);
            //cout<<temp<<" ";
        }
        return ans;
    }
};
