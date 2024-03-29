class Solution {
public:
    string minWindow(string s, string t) {
        
        int m =s.size(),n=t.size();
        if(n==0 || m==0) return "";
        //unordered_map<char,int> freq;
        vector<int> freq(128,0);
        int count =0;
        for(char c: t){
            freq[c]++;
            count++;
        }

        int start=0,e=0;
        pair<int,int> p = {0,s.size()};
        
        while(e<m){
            
            if(freq[s[e]] > 0) count--;
            freq[s[e]]--;
            
            while(count==0){
                if(e-start<p.second-p.first) p = {start,e};
                freq[s[start]]++;
                if(freq[s[start]] > 0) count++;
                start++;
            }
            e++;
        }
        if(p.second-p.first<s.size()) return s.substr(p.first,p.second-p.first+1);
        return "";
    }
};
