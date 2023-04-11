class Solution {
public:
    void call(string &temp,int l,int r,vector<string> &ans){
        if(l==0 && r==0){
            ans.emplace_back(temp);
            return;
        }

        if(l>0){
            temp.push_back('(');
            call(temp,l-1,r,ans);
            temp.pop_back();
        }
        if(l<r){
            temp.push_back(')');
            call(temp,l,r-1,ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        call(temp,n,n,ans);
        return ans;
    }
};
