class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            v[i] = {capital[i],profits[i]};
        }
        sort(v.begin(),v.end());

        priority_queue<int> maxim;
        int i=0;
        while(k--){
            while(i<n && v[i].first<=w){
                maxim.push(v[i].second);
                i++;
            }
            if(maxim.empty()) break;

            w+=maxim.top();
            maxim.pop();

        }
        return w;
    }
};
