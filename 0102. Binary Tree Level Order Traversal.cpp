class Solution {
public:
    vector<vector<int>> ans;
    void trav(TreeNode* root,int rank){
        if(root){
            if(ans.size()<=rank){
                ans.push_back(vector<int>());
            }
            ans[rank].push_back(root->val);
            if(root->left) trav(root->left,rank+1);
            if(root->right) trav(root->right,rank+1);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        //vector<vector<int>> ans;
        trav(root,0);
        return ans;
    }
};
