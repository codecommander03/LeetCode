class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 0;
        vector<int> h(n, 0);

        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                if(matrix[i][j] == 0) h[j] = 0;
                else h[j] += 1;
            }
			
            vector<int> h2 = h;
            sort(h2.begin(), h2.end());
			
            for(int j = 0;j < n;j++){
                ans = max(ans, h2[j] * (n - j));
            }
        }
        return ans;
    }
};
