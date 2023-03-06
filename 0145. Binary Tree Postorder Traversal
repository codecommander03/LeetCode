https://leetcode.com/problems/binary-tree-postorder-traversal/

class Solution {
public:
    vector<int> v;
    void postorder(TreeNode* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        v.emplace_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return v;
    }
};
