class Solution {
public:
    // nsr = next smallest right
    // nsl = next smallest left
    int n;
    vector<int> nsr(vector<int>& arr){
        vector<int> ans;
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i]<= arr[s.top()]) s.pop();

            if(s.empty()) ans.push_back(n);
            else ans.emplace_back(s.top());
            s.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> nsl(vector<int> &arr){
        vector<int> ans;
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[i]<= arr[s.top()]) s.pop();
            if(s.empty()) ans.push_back(-1);
            else ans.emplace_back(s.top());
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        n = heights.size();
        vector<int> r = nsr(heights);
        vector<int> l = nsl(heights);
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans,(r[i] -l[i] -1)*heights[i]);
        }
        return ans;
    }
};
