class Solution {
public:
    void cal(queue<string> &q,int i,string &s){
        if(i==s.size()) return;
        int num = int(s[i]);

        if(int(s[i])<48 || int(s[i])>57){
            int n = q.size();
            while(n--){
                string t = q.front();
                q.pop();
                t[i] = tolower(t[i]);
                q.push(t);
                t[i] = toupper(t[i]);
                q.push(t);
            }
        }
        cal(q,i+1,s);
    }
    vector<string> letterCasePermutation(string s) {
        queue<string> q;
        q.push(s);
        vector<string> ans;
        cal(q,0,s);
        while(!q.empty()){
            ans.emplace_back(q.front());
            q.pop();
        }
        return ans;
    }
};
