class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> m;
        for(char c: s) m[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto i: m){
            pq.push({i.second,i.first});
            cout<<i.second <<" "<<i.first<<"\n";
        }
        string res;
        res += pq.top().second;
        auto p = pq.top();
        pq.pop();
        if(--p.first) pq.push(p);
        while(!pq.empty()){
            p = pq.top();
            pq.pop();
            if(res.back() == p.second){
                if(p.first>0 && pq.empty()) return "";
                auto p2 = pq.top();
                pq.pop();
                res.push_back(p2.second);
                if(--p2.first>0) pq.push(p2);
                pq.push(p);
            }
            else{
                res.push_back(p.second);
                if(--p.first) pq.push(p);
            }
            cout<<res<<"\n";
        }
        return res;
    }
};
