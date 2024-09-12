class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root==NULL) return "";
        string ans = to_string(root->val);
        if(root->left && root->right) ans = ans + "("+tree2str(root->left)+")"+"("+tree2str(root->right)+")";
        else if(root->left) ans = ans + "("+tree2str(root->left)+")";
        else if(root->right) ans = ans + "()" + "("+tree2str(root->right)+")";

        return ans;
    }
};
