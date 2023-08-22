class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        
        for(int i=0;i<n;i++) pq.push({matrix[i][0],{i,0}});
        
        while(--k){
            auto p = pq.top();
            pq.pop();
            int i = p.second.first,j=p.second.second;
            if(j != n-1) pq.push({matrix[i][j+1],{i,j+1}});
        }
        return pq.top().first;
    }
};
