class Solution {
public:
  vector<int> fun(vector<vector<int>> &adj,string &labels,int i,vector<int>&res){
    vector<int> ans(26,0);
    res[i] = 1;
    ans[labels[i] - 'a'] = 1;

    for(int j: adj[i]){
        if(!res[j]){
            vector<int> temp = fun(adj,labels,j,res);
            for(int k=0;k<26;k++) ans[k] += temp[k];
        }
    }
    
    res[i] = ans[labels[i]-'a'];
    
    return ans;
  }
  
  vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
    vector<vector<int>> adj(n);
    vector<int> res(n,0);
    for(auto e: edges){
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }
    
    fun(adj, labels, 0,res);
    return res;
  }
};
