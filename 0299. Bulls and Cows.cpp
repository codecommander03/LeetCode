class Solution {
public:
    int stoi(char c){
        return int(c)-47;
    }
    string getHint(string secret, string guess) {
        vector<int> v(12,0);
        int bull=0,cow=0;
        for(int i=0;i<secret.size();i++){
            if(secret[i]!=guess[i]) v[stoi(secret[i])]++;
        }
        for(int i=0;i<guess.size();i++){
            if(guess[i]==secret[i]) bull++;
            else{
                if(v[stoi(guess[i])]>0){
                    cow++;
                    v[stoi(guess[i])]--;
                }
            }
        }
        string s="";
        s+=to_string(bull);
        s+="A";
        s+=to_string(cow);
        s+="B";
        return s;
    }
};
