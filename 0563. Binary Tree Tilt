class Solution {
public:
    int sum = 0;
    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->val;
        int l = root->left ? dfs(root->left) : 0;
        int r = root->right ? dfs(root->right) : 0;
        sum += abs(l-r);
        return l + root->val + r;
    }
    int findTilt(TreeNode* root) {
        if(root==NULL) return 0;
        dfs(root);
        return sum;
    }
};
