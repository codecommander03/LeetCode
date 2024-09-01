class Solution {
public:
    bool check(TreeNode* root, TreeNode* subRoot){
        if(!root ^ !subRoot) return false;
        if(!root & !subRoot) return true;
        return root->val == subRoot->val & check(root->left,subRoot->left) & check(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto t = q.front();
            q.pop();
            if(t->val == subRoot->val && check(t,subRoot)) return true;
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        return false;
    }
};
