class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> m;
        for(char c: order){
            m[c] = 0;
        }
        string ans = "";
        for(char c: s){
            if(m.count(c)==0){
                ans.push_back(c);
            }
            else m[c]++;
        }
        string pre = "";
        for(char c: order){
            for(int i=0;i<m[c];i++){
                pre.push_back(c);
            }
        }
        pre += ans;
        return pre;
    }
};
