class RandomizedSet {
public:
    unordered_map<int,int> m;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.count(val)) return false;
        m[val] = v.size();
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(!m.count(val)) return false;
        int i = v.back();
        int j = m[val];

        m[i] = j;
        v[j] = i;

        m.erase(val);
        v.pop_back();
        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};
