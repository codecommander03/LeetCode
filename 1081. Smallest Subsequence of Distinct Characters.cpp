class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> m,include;
				for(char c: s) m[c]++;
				string res = "";
				for(char c: s){
					m[c]--;
					if(include[c]) continue;
					while(!res.empty() && res.back() > c && m[res.back()]){
						include[res.back()] = 0;
						res.pop_back();
					}
					res.push_back(c);
					include[c] = 1;
				}
				return res;
    }
};
