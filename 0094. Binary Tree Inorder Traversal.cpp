

class Solution {
public:
    vector<int> v;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        v.emplace_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return v;
    }
};
