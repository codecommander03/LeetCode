class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        if(startGene==endGene) return 0;
        if(bank.size()==0) return -1;

        //unordered_set<string> s(bank.begin(),bank.end());
        unordered_map<string,int> s;
        for(auto &i: bank) s[i] = 1;
        if(s.count(endGene)==0) return -1;

        unordered_map<string,int> vis;
        vis[startGene] = 1;

        queue<string> q;
        q.push(startGene);

        const char c[4] = {'A','C','G','T'};
        string curr,temp;

        int ans = 1;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                curr = q.front();
                q.pop();
                for(int i=0;i<8;i++){
                    temp = curr;
                    for(const char j: c){
                        temp[i] = j;
                        if(temp==endGene) return ans;
                        if(!vis[temp] && s[temp]==1){
                            q.push(temp);
                            vis[temp] = 1;
                        }
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};
