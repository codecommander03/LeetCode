class Solution {
public:
    string fractionToDecimal(long long numerator,long long denominator) {
        if(numerator==0) return "0";
        string ans;

        if((numerator<0) ^ (denominator<0)) ans += '-';

        //numerator = abs(numerator);
        //denominator = abs(denominator);
        if(numerator<0) numerator = abs(numerator);
        if(denominator<0) denominator= abs(denominator);

        ans += to_string(numerator/denominator);

        if(numerator % denominator == 0) return ans;

        ans += '.';

        unordered_map<int,int> m;

        for(long long i=numerator%denominator;i;i%=denominator){
            if(m.count(i)>0){
                ans.insert(m[i],"(");
                ans += ')';
                break;
            }
            m[i] = ans.size();

            i *= 10;

            ans += to_string(i/denominator);
        }
        return ans;
    }
};
