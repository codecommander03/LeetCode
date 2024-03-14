class BSTIterator {
public:
    stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
        helper(root);
    }
    
    int next() {
        TreeNode* tmp = s.top();
        s.pop();
        helper(tmp->right);
        return tmp->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
    void helper(TreeNode* root){
        while(root){
            s.push(root);
            root=root->left;
        }
    }
};
