class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>> p;
        map<string,int> m;

        for(auto i: words){
            m[i]++;
        }
        for(auto i: m){
            p.push({-i.second,i.first});
            if(p.size()>k) p.pop();
        }
        vector<string> v;
        while(!p.empty()){
            v.push_back(p.top().second);
            p.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
