class BrowserHistory {
public:
    vector<string> tab;
    int ind;

    BrowserHistory(string homepage) {
        tab.push_back(homepage);
        ind=0;
    }
    
    void visit(string url) {
        tab.resize(ind+1);
        tab.push_back(url);
        ind++;
    }
    
    string back(int steps) {
        int n = min(steps,ind);
        ind -= n;
        return tab[ind];
    }
    
    string forward(int steps) {
        int n = min(steps,(int)tab.size()-ind-1);
        ind += n;
        return tab[ind];
    }
};
