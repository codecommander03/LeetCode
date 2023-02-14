https://leetcode.com/problems/zigzag-conversion/

class Solution {
public:
    string convert(string s, int numRows) {
        int n = numRows;
        if(n==1) return s;
        int N = s.length();
        vector<string> v(n,"");
        int i=0;
        int col=0;
        while(i<N){
            if(col%(n-1)==0){
                for(int j=0;j<n && i<N;j++){
                    v[j] += s[i];
                    i++;
                }
            }
            else if(i<N){
                v[n-col%(n-1)-1] +=s[i];
                i++;
            }
            col++;
        }
        string ans="";
        for(int i=0;i<n;i++){
            ans+=v[i];
        }
        return ans;
    }
};
