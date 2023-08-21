class Solution {
public:
    unordered_map<char,string> m;
    
    string help(int x){
        if(x<=3) return "";
        else if(x<=6) return " Thousand";
        else if(x<=9) return " Million";
        return " Billion";
    }
    string same(string num){
        if(num[0]=='0') num = num.substr(1,2);
        if(num[0]=='0') num = num.substr(1,1);
        int n = num.size();
        if(n==1){
            return m[num[0]];
        }
        string ans = "";
        if(n==3){
            if(num[0] != '0') ans = m[num[0]] + " Hundred";
            if(num[1]=='0' && num[2]=='0') return ans;
        }
        ///
        if(n==3 && num[1]!='0') ans += " ";
        if(num[n-2]=='1'){
            if(num[n-1]=='0') ans += "Ten";
            else if(num[n-1]=='1') ans += "Eleven";
            else if(num[n-1]=='2') ans += "Twelve";
            else if(num[n-1]=='3') ans += "Thirteen";
            else if(num[n-1]=='4') ans += "Fourteen";
            else if(num[n-1]=='5') ans += "Fifteen";
            else if(num[n-1]=='6') ans += "Sixteen";
            else if(num[n-1]=='7') ans += "Seventeen";
            else if(num[n-1]=='8') ans += "Eighteen";
            else if(num[n-1]=='9') ans += "Nineteen";
            return ans;
        }
        if(num[n-2]=='2') ans += "Twenty";
        if(num[n-2]=='3') ans += "Thirty";
        if(num[n-2]=='4') ans += "Forty";
        if(num[n-2]=='5') ans += "Fifty";
        if(num[n-2]=='6') ans += "Sixty";
        if(num[n-2]=='7') ans += "Seventy";
        if(num[n-2]=='8') ans += "Eighty";
        if(num[n-2]=='9') ans += "Ninety";
        if(num[n-1]!='0') ans = ans+ " " + m[num[n-1]];
        return ans;
    }

    string numberToWords(int num) {
        if(num==0) return "Zero";
        m['0'] = "";
        m['1'] = "One";
        m['2'] = "Two";
        m['3'] = "Three";
        m['4'] = "Four";
        m['5'] = "Five";
        m['6'] = "Six";
        m['7'] = "Seven";
        m['8'] = "Eight";
        m['9'] = "Nine";
        string s = to_string(num);
        int n = s.size();
        if(n<3) return same(s);
        string ans;
        int i;
        for(i=n-3;i>=0;i-=3){
            if(s.substr(i,3)=="000") continue;
            string temp;
            if(i) temp += " ";
            temp+=same(s.substr(i,3));
            temp+= help(n-i);
            ans  = temp + ans;
        }
        if(i != -3){
            i+=3;
            string temp;
            temp+=same(s.substr(0,i));
            temp+= help(n-i+1);
            ans  = temp + ans;
        }
        return ans;
    }
};
