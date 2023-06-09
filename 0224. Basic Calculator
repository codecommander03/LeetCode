class Solution {
public:
    using ll = long long;
    int calculate(string s) {
        ll sum = 0;
        int sign = 1;
        stack< pair<int,int> > st;

        for(int i=0;i<s.size();i++){
            if(s[i] == ' ') continue;
            else if(isdigit(s[i])){
                ll num = 0;
                while(i<s.size() && isdigit(s[i])){
                    num = num*10 + (s[i] - '0');
                    i++;
                }
                i--;
                sum += num*sign;
                sign = 1;
            }
            else if(s[i]=='-'){
                sign *= -1;
            }
            else if(s[i] == '('){
                st.push({sum,sign});
                sum = 0;
                sign = 1;
            }
            else if(s[i] == ')'){
                sum = st.top().first + (st.top().second * sign * sum);
                st.pop();
                sign = 1;
            }
        }
        return sum;
    }
};
