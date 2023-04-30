class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        vector<int> v = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> x = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0;i<v.size() && num>0;i++){
            while(num>=v[i]){
                num -= v[i];
                s += x[i];
            }
        }
        return s;
    }
};
