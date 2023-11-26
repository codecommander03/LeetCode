class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int h = haystack.size();
        int i=0;
        while(i<h){
            if(haystack[i]==needle[0]){
                int j=0;
                int i2 = i;
                while(j<n && haystack[i2]==needle[j] && i2<h){
                    if(j==n-1) return i2-j;
                    j++;
                    i2++;
                }
                i = i + 1;
            }
            else i++;
        }
        return -1;
    }
};
