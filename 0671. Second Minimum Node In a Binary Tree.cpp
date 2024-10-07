class Solution {
public:
    set<int> s;
    void dfs(TreeNode* root){
        if(root==NULL) return;
        s.insert(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root);
        if(s.size()==1) return -1;
        s.erase(s.begin());
        return *s.begin();
    }
};
