class Solution {
public:
    vector< pair<int,int> > v;
    int sum = 0;
    Solution(vector<int>& w) {
        for(int i: w){
            v.push_back({sum,sum+i-1});
            sum+=i;
        }
    }
    
    int pickIndex() {
        int ind = rand() % sum;
        int l=0,r=v.size();
        while(l<=r){
            int mid = l + (r-l)/2;
            if(v[mid].first<=ind && ind<=v[mid].second) return mid;
            else if(ind < v[mid].first) r = mid-1;
            else l = mid+1;
        }
        return -1;
    }
};
