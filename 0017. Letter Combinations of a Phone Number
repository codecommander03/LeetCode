class Solution {
public:
    int n;
    string d[9]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void c(string &digits,int i,vector<string> &ans,string &temp){
        if(i==n){
            ans.emplace_back(temp);
            return;
        }
        string curr = d[digits[i]-'2'];
        for(char ch: curr){
            temp.push_back(ch);
            c(digits,i+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        n = digits.size();
        if(n==0) return {};
        string temp;
        vector<string> ans;
        c(digits,0,ans,temp);
        return ans;
    }
};
