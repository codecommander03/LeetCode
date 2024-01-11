.class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        
        int n = matrix[0].size();
        int ans=0;
        vector<int> max_col(n+1);
        for(auto v: matrix){
            for(int i=0;i<n;i++){
                if(v[i]=='0') max_col[i] = 0;
                else max_col[i]++;
            }
            stack<int> s;
            s.push(-1);
            for(int i=0;i<=n;i++){
                while(s.top()!=-1 && max_col[i] < max_col[s.top()] ){
                    int h = max_col[s.top()];
                    s.pop();
                    int w = i - s.top() -1;
                    ans = max(ans, h*w);
                }
                s.push(i);
            }
        }
        
        return ans;
    }
};
