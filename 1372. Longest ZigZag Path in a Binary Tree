class Solution {
public:
    int ans=0;
    void help(TreeNode* root,int len,bool flag){
        if(!root) return;
        ans = max(ans,len+1);
        if(flag){
            help(root->left,len+1,false);
            help(root->right,0,true);
        }
        else{
            help(root->right,len+1,true);
            help(root->left,0,false);
        }
        
    }
    int longestZigZag(TreeNode* root) {
        if(root==NULL) return 0;
        help(root->right,0,true);
        help(root->left,0,false);
        return ans;
    }
};
