class Solution {
public:
    int ans = 0;
    void helper(TreeNode* root,int mx){
        if(root==NULL) return;
        mx = max(mx,root->val);
        
        if(root->val == mx) ans++;
        helper(root->left,mx);
        helper(root->right,mx); 
    }
    int goodNodes(TreeNode* root) {
        helper(root,root->val);
        return ans;
    }
};
