class Solution {
public:
    TreeNode *prev=NULL,*n1=NULL,*n2=NULL;
    void help(TreeNode* root){
        if(root==NULL) return;
        help(root->left);
        if(prev!=NULL && root->val < prev->val){   // prev ->(right child) root
            if(n1==NULL){
                n1 = prev;
            }
            n2 = root;
        } 
        prev = root;
        help(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL) return;
        prev = new TreeNode(INT_MIN);
        help(root);
        swap(n1->val,n2->val);
    }
};
