https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> m;
        int start = 0,maxsize=0;
        for(int i=0;i<n;i++){
            if(m.count(s[i]) && m[s[i]] >= start){
                maxsize=max(maxsize,i-start);
                start = m[s[i]]+1;
            }
            m[s[i]] = i;

        }
        return max(maxsize,n-start);
    }
};
