class Solution {
public:
    vector<vector<string>> ans;
    int n;
    bool check(string &s,int l,int r){
        while(l<=r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    void helper(int ind,string &s,vector<string>& temp){
        if(ind==n){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<n;i++){
            if(check(s,ind,i)){
                temp.push_back(s.substr(ind,i-ind+1));
                helper(i+1,s,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        n = s.size();
        vector<string> temp;
        helper(0,s,temp);
        return ans;
    }
};
