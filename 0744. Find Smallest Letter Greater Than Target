class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = ('z'-'1')+'2';
        for(char &c: letters){
            if(c > target && c < ans) ans = c;
        }
        if(ans==('z'-'1')+'2') ans = letters[0];
        return ans;
    }
};
