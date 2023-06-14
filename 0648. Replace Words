class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string,int> m;
        for(auto &s: dictionary) m[s] = 1;
        int i=0,n=sentence.size();
        string ans = "";
        while(i<n){
            if(sentence[i]==' '){
                i++;
                continue;
            }
            string s="";
            bool flag = false;
            while(i<n && sentence[i] != ' ' && !flag){
                s.push_back(sentence[i]);
                if(m[s]==1){
                    flag = true;
                }
                i++;
            }
            while(i<n && sentence[i] != ' ') i++;
            ans = ans + s + ' ';
        }
        ans.pop_back();
        return ans;
    }
};
