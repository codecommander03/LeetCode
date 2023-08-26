class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> v;
        for(string &s: timePoints){
            int h,m;
            if(s[0]=='0') h = stoi(s.substr(1,1));
            else h = stoi(s.substr(0,2));
            if(s[3]=='0') m = stoi(s.substr(4,1));
            else m = stoi(s.substr(3,2));
            v.push_back(60*h+m);
        }
        int ans = 24*60;
        sort(begin(v),end(v));
        v.push_back(24*60+v[0]);
        for(int i=1;i<=n;i++) ans = min(ans,v[i]-v[i-1]);
        return ans;
    }
};
