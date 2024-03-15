class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(auto i: nums) v.push_back(to_string(i));

        sort(begin(v),end(v),[](string&s1,string&s2){
            return s1+s2>s2+s1;}
        );

        string res;
        for(auto s: v) res.append(s);
        while(res[0]=='0' && res.length()>1) res.erase(0,1);
        return res;
    }
};
