class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string s="";
        int i = a.size()-1,j=b.size()-1;
        while(i>=0 || j>=0 || carry){
            if(i>=0){
                carry+=a[i]-'0';
                i--;
            }
            if(j>=0){
                carry+=b[j]-'0';
                j--;
            }
            //s+=(carry%2+'0');
            string t="";
            t+=(carry%2 +'0');
            s = t+s;
            carry /= 2;
        }
        //reverse(s.begin(),s.end());
        return s;
    }
};
