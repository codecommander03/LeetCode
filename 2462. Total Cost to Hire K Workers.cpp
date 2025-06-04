class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> left;
        priority_queue<int,vector<int>,greater<int>> right;
        int n = costs.size();
        int i=0,j=n-1;
        long long ans = 0;
        
        while(k--){
            while(i<=j && left.size()<candidates){
                left.push(costs[i]);
                i++;
            }
            while(i<=j && right.size()<candidates){
                right.push(costs[j]);
                j--;
            }
            int l,r;
            if(left.empty()) l = INT_MAX;
            else l = left.top();
            if(right.empty()) r = INT_MAX;
            else r = right.top();
            if(l<=r){
                ans += l;
                left.pop();
            }
            else{
                ans += r;
                right.pop();
            }
        }
        return ans;
    }
};
