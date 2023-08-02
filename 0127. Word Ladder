class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,int> vis;
        unordered_map<string,int> ls;
        queue<string> q;
        q.push(beginWord);
        vis[beginWord] = 1;
        for(string &s: wordList) ls[s] = 1;
        int ans = 1;
        if(endWord==beginWord) return 0;
        while(!q.empty()){
            int sz = q.size();
            ans++;
            while(sz--){
                string s = q.front();
                q.pop();
                for(int i=0;i<s.size();i++){
                    string s2 = s;
                    for(char c='a';c<='z';c++){
                        s2[i] = c;
                        if(ls[s2]==1 && vis.find(s2)==vis.end()){
                            vis[s2] = 1;
                            q.push(s2);
                            if(s2==endWord) return ans;
                        }
                    }
                }
            }
        }
        return 0;
    }
};
