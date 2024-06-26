class Solution {
public:
    bool isdig(char c){
        return (int(c)>=48 && int(c)<=57);
    }
    string decodeString(string s) {
        stack<char> stk;
        //int n= s.size();
        for(int i=0;i<s.size();i++){
            stk.push(s[i]);
            if(s[i]==']'){
                stk.pop();
                string temp="";
                while(!stk.empty() && stk.top()!='['){
                    temp = stk.top() + temp;
                    stk.pop();
                }
                stk.pop();
                string digit="";
                while(!stk.empty() && isdig(stk.top())){
                    digit = stk.top()+digit;
                    stk.pop();
                }
                int d = stoi(digit);
                string res="";
                while(d--){
                    res+=temp;
                }
                for(auto c: res){
                    stk.push(c);
                }
            }
        }
        string ans="";
        while(!stk.empty()){
            ans = stk.top() + ans;
            stk.pop();
        }
        return ans;
    }
};
