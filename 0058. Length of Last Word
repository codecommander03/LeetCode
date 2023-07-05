class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans = "";
        string tmp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(tmp.size()){
                    ans = tmp;
                    tmp.clear();
                }
            }
            else{
                tmp.push_back(s[i]);
            }
        }
        if(tmp.size()) ans = tmp;
        return ans.size();
    }
};
