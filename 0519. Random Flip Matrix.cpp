class Solution {
public:
    int m,n;
    unordered_set<int> s;
    Solution(int m, int n) {
        this->m = m;
        this->n = n;
    }
    
    vector<int> flip() {
        if(s.size() == m*n) return {};
        int z = rand() % (m*n);
        while(s.find(z) != s.end()){
            z = (++z)%(m*n);
        }
        s.insert(z);
        return {z/n,z%n};
    }
    
    void reset() {
        s.clear();
    }
};
