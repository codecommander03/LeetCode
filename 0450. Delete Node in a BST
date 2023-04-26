class Solution {
public:
    int minv(TreeNode* root){
        while(root->left != NULL) root = root->left;
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;

        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }
            else if(root->left==NULL){
                return root->right;
            }
            else if(root->right==NULL){
                
                return root->left;
            }
            else{
                int parent = minv(root->right);
                root->val = parent;
                root->right = deleteNode(root->right,parent);
                return root;
            }
        }
        else if(root->val > key){
            root->left = deleteNode(root->left,key);
        }
        else root->right = deleteNode(root->right,key);
        return root;
    }
};
