class Solution {
public:
    int ans=INT_MIN;
    int help(TreeNode* root){
        if(root==NULL) return 0;

        int l = help(root->left);
        int r = help(root->right);

        int sum = root->val;
        
        sum += max(max(0,l+r),max(l,r));

        ans = max(ans,sum);

        return root->val + max(0,max(l,r));
    }
    int maxPathSum(TreeNode* root) {
        ans = root->val;
        help(root);
        return ans;
    }
};
