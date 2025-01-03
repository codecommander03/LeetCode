class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        for(auto it: s){
            if(it == '#'){
                if(a.empty()) continue;
                a.pop();
            }
            else{
                a.push(it);
            }
        }
        for(auto it: t){
            if(it == '#'){
                if(b.empty()) continue;
                b.pop();
            }
            else{
                b.push(it);
            }
        }
        while(!a.empty() && !b.empty()){
            if(a.top()!=b.top()){
                return false;
            }
            a.pop();
            b.pop();
        }
        if(!a.empty()||!b.empty()) return false;
        return true;
    }
};
