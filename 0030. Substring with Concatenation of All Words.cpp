class Solution {
public:
    int len;
    bool check(string s,unordered_map<string,int> m){
        for(int i=0;i<s.size();i+=len){
            string temp = s.substr(i,len);
            if(m.find(temp) != m.end()){
                if( --m[temp] == -1) return false;
            }
            else return false;
        }
        return true;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        unordered_map<string,int> m;

        len = words[0].size();
        int N = len*(words.size());

        for(string &i: words) m[i]++;

        for(int i=0;i+N<=s.size();i++){
            if( check( s.substr(i,N), m ) ){
                ans.emplace_back(i);
            }
        }
        // int i=0;
        // while(i+N<=s.size()){
        //     if(check(s.substr(i,N),m)){
        //         ans.emplace_back(i);
        //     }
        //     i++;
        // }
        return ans;
    }
};
