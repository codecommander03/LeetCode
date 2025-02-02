class Solution {
public:
    void helper(TreeNode* root,TreeNode* temp){
        if(root->val > temp->val){
            if(root->left==NULL) root->left = temp;
            else helper(root->left,temp);
        }
        else{
            if(root->right==NULL) root->right = temp;
            else helper(root->right,temp);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = new TreeNode(val);
        if(root==NULL) return temp;
        helper(root,temp);

        return root;
    }
};
