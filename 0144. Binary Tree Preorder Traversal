https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution {
public:
    vector<int> v;
    void preorder(TreeNode* root){
        if(root==NULL) return;
        v.emplace_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return v;
    }
};
