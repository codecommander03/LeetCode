class Solution {
public:
    bool isValid(string s) {
        std::stack<char> br;
        int n = s.size();
        for(int i=0;i<n;i++){
            char c = s[i];
            if(c=='(' || c=='{' || c=='[') br.push(c);
            else if(br.empty()||br.top()=='('&&c!=')'||br.top()=='{'&&c!='}'||br.top()=='['&&c!=']') return false;
            else br.pop();
        }
        if(!br.empty()) return false;
        return true; 
    }

};
