class Solution {
public:
    void helper(TreeNode* root,int sum,int target,int *ans){
        if(root!=NULL){
            if(root->left==NULL && root->right==NULL && sum+root->val==target){
                *ans = 1;
                return;
            }
            helper(root->left, sum+root->val,target,ans);
            helper(root->right,sum+root->val,target,ans);
        }
        //return false;
    } 
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        int ans = 0;
        helper(root,0,targetSum,&ans);
        if(ans==1) return 1;
        return 0;
    }
};
