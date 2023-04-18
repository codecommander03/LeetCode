class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int m=word1.size(),n=word2.size();
        string s="";
        while(i<m && j<n){
            s = s + word1[i++] + word2[j++];
        }
        while(i<m){
            s+=word1[i++];
        }
        while(j<n){
            s+=word2[j++];
        }
        return s;
    }
};
