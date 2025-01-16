class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int i = s.size()-1;
        while(i>=0){
            if(s[i]=='#'){
                i-=2;
                int temp = stoi(s.substr(i,2))-1;
                char c = temp + 'a';
                ans = c + ans;
                //if(i==0) break;
                i--;
            }
            else{
                int temp = (s[i]-'0') - 1;
                char c = temp + 'a';
                ans = c + ans;
                i--;
            }
        }
        return ans;
    }
};
