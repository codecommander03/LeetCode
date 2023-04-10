class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i=0;
        //long long ans = 0;
        double ans=0;
        while(s[i]==' ') i++;
        bool negative = false;
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-') negative = true;
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            ans *= 10;
            ans+=(s[i]-'0');
            i++;
        }
        if(negative) ans*=(-1);
        if(ans>=INT_MAX){
            return INT_MAX;
        }
        else if(ans<=INT_MIN){
            return INT_MIN;
        }
        return (int)ans;
    }
};
