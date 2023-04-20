class Solution {
public:
    int ans = 0;
    void sum(TreeNode* root,bool flag){
        if(root==NULL) return;
        if(root->left ==NULL && root->right == NULL && flag){
            ans += root->val;
            return;
        }
        sum(root->left,true);
        sum(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return root->val;
        sum(root->left,true);
        sum(root->right,false);
        return ans;
    }
};
