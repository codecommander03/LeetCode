class Solution {
public:
    pair<int,int> c(string&s){
        int n = s.size();
        int real=1,imaginary=1;
        int i=0;
        while(s[i] != '+'){
            i++;
        }
        real = stoi(s.substr(0,i));
        imaginary = stoi(s.substr(i+1,n-1-i));
        return {real,imaginary};

    }
    string complexNumberMultiply(string &num1, string &num2) {
        pair<int,int> p1 = c(num1),p2 = c(num2);
        int a = p1.first,b=p1.second;
        int c = p2.first,d=p2.second;
        string ans = to_string(a*c-b*d);
        ans += '+';
        ans += to_string(a*d+b*c) + "i";
        return ans;
    }
};
