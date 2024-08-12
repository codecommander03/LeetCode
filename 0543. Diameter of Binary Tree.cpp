class Solution {
public:
    int helper(TreeNode* root,int &res){
        if(root==NULL) return 0;
        int l = helper(root->left,res),r = helper(root->right,res);
        res = max(res,l+r); // updates diameter with the help of left and right heights
        return max(l,r) + 1; // return height;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        helper(root,ans);
        return ans;
    }
};
