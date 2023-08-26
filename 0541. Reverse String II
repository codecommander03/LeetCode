class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        while(i<s.size()){
            if(i+k<s.size()) reverse(begin(s)+i,begin(s)+i+k);
            else reverse(begin(s)+i,end(s));
            i += 2*k;
        }
        return s;
    }
};
