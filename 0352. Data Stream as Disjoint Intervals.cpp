class SummaryRanges {
public:
    set<int> s;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        s.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        if(s.empty()) return {};
        vector<vector<int>> ans;
        int l=-1,r=-1;
        for(int i: s){
            if(l==-1){
                l = r = i;
            }
            else if(i==1+r) r++;
            else{
                ans.push_back({l,r});
                l = r = i;
            } 
        }
        ans.push_back({l,r});
        return ans;
    }
};
