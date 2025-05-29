class Solution {
public:
    bool helper(vector<int> v){
        unordered_set<int> s;
        for(int i=0;i<26;i++){
            if(v[i]){
                s.insert(v[i]);
                if(s.size()>1) return false;
            }
        }
        return true;
    }

    bool equalFrequency(string word) {
        vector<int> v(26,0);
        
        for(int i=0;i<word.size();i++){
            v[word[i]-'a']++;
        }
        for(int i=0;i<word.size();i++){
            v[word[i]-'a']--;
            if(helper(v)==true) return true;
            v[word[i]-'a']++; 
        }
        return false;
    }
};
