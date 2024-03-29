class Solution {
public:
    bool compare(TreeNode* n1,TreeNode* n2){
        if(n1==NULL && n2 == NULL) return true;
        if(n1==NULL || n2 == NULL) return false;
        if(n1->val != n2->val) return false;
        return compare(n1->left,n2->right) & compare(n1->right,n2->left);

    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return compare(root->left,root->right);
    }
};
