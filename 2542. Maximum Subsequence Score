class Solution {
public:
    bool static cmp(vector<int>& a,vector<int>& b){
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] > b[0];
    }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector< vector<int> > v;

        for(int i=0;i<n;i++){
            v.push_back({nums2[i],nums1[i]});
        }
        sort(v.begin(),v.end(),cmp);

        long long ans = 0,tmp = 0;
        int cnt=0;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(auto &i: v){
            tmp += i[1];
            pq.push(i[1]);
            if(pq.size()>k){
                tmp -= pq.top();
                pq.pop();
            }
            if(pq.size()==k) ans = max(ans,tmp*i[0]);
        }
        return ans;
    }

};
