class Solution {
public:
    void helper(TreeNode* root,int &ans,int n){
        n  = 10*n + root->val;
        if(root->left==NULL && root->right==NULL) ans+=n;

        if(root->left != NULL) helper(root->left,ans,n);
        if(root->right != NULL) helper(root->right,ans,n);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        helper(root,ans,0);
        return ans;
    }
};
