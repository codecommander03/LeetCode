class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> hop(n+1,0);

        for(int i=0;i<ranges.size();i++){
            int l = max(0,i-ranges[i]);
            int r = min(n,i+ranges[i]);
            hop[l] = max(hop[l],r-l);
        }

        int cnt = 0,end=0,curfarthest=0;
        for(int i=0;i<n;i++){
            if(i>curfarthest) return -1;
            curfarthest = max(curfarthest,i+hop[i]);

            if(i==end){
                cnt++;
                end = curfarthest;
            }
        }
        return curfarthest >=n ? cnt : -1;
    }
};
