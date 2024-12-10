class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> v1(26,0),v2(26,0);
        for(char c: words[0]){
            v1[c-'a']++;
        }
        for(int i=1;i<n;i++){
            for(char c: words[i]){
                v2[c-'a']++;
            }
            for(int j=0;j<26;j++){
                v1[j] = min(v1[j],v2[j]);
                v2[j]=0;
            }
        }

        vector<string> ans;
        for(int i=0;i<26;i++){
            int t = v1[i];
            if(t<1) continue;
            char c = i + 'a';
            string s = "";
            s+=c;
            
            while(t--){
                ans.emplace_back(s);
            }
        }
        return ans;
    }
};
