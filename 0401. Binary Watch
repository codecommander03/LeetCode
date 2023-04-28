class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i=0;i<=11;i++){
            for(int j=0;j<=59;j++){
                if(__builtin_popcount(i)+__builtin_popcount(j)==turnedOn){
                    cout<<"--"<<endl;
                    string s = "";
                    s = s + to_string(i) + ":";
                    if(j<=9) s += "0";
                    s += to_string(j);
                    ans.emplace_back(s);
                }
            }
        }
        return ans;
    }
};
