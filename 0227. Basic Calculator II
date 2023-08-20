class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int temp=0,res=0;
        char sign = '+';
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(isdigit(c)) temp = temp*10 + (c-'0');
            if(!isdigit(c) && !isspace(c) || i == s.size()-1){
                if(sign=='-') st.push(-temp);
                else if(sign=='+') st.push(temp);
                else{
                    int num = (sign=='*') ? st.top()*temp : st.top()/temp;
                    st.top() = num;
                }
                sign = c;
                temp = 0;
            }
        }

        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};
