class Solution {
public:
    // void helper(int s,int n,int k,vector<vector<int>> &ans,vector<bool> &vis,vector<int> &temp){
    //     if(temp.size()==k) ans.push_back(temp);
    //     for(int i=s;i<=n;i++){
    //         if(vis[i]==false){
    //             temp.push_back(i);
    //             vis[i] = true;
    //             helper(i+1,n,k,ans,vis,temp);

    //             //backtrack
    //             vis[i]=false;
    //             temp.pop_back();
    //         }
    //     }
    // }
    // vector<vector<int>> combine(int n, int k) {
    //     vector<vector<int>> ans;
    //     vector<bool> visited(n+1,false);
    //     vector<int> temp;
    //     helper(1,n,k,ans,visited,temp);
    //     return ans;
    // }
        void helper(int s,int n,int k,vector<vector<int>> &ans,vector<int> &temp){
        if(temp.size()==k) ans.push_back(temp);
        for(int i=s;i<=n;i++){
            temp.push_back(i);
            helper(i+1,n,k,ans,temp);

            //backtrack
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(1,n,k,ans,temp);
        return ans;
    }
};
