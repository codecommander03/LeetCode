class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        if(root->left && root->right){
            return 1+min(l,r);
        }
        return 1+max(l,r);
    }
};
