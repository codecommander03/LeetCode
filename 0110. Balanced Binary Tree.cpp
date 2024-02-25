class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        if(l==-1 || r==-1) return -1;

        if(abs(l-r)>1) return -1;

        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if(height(root)==-1) return false;
        return true;
    }
};