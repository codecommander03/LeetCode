class TimeMap {
public:
    static bool comp(const pair<int,string>&a,const pair<int,string>&b){
        return a.first<b.first;
    };
    unordered_map<string,vector<pair<int,string>>>m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto it=upper_bound(begin(m[key]),end(m[key]),pair<int,string>(timestamp,""),comp);
        return (it == m[key].begin()) ? "" : prev(it)->second;
    }
};
