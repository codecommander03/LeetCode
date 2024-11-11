class Solution {
public:
    TreeNode* lca(TreeNode* root,TreeNode* l,TreeNode* r){
        if(root==NULL || root==l || root==r) return root;
        TreeNode* L = lca(root->left,l,r);
        TreeNode* R = lca(root->right,l,r);

        if(!L) return R;
        if(!R) return L;
        return root;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode *left_leaf = NULL;
        TreeNode *right_leaf = NULL;

        while(!q.empty()){
            int l = q.size();
            for(int i=0;i<l;i++){
                TreeNode* t = q.front(); q.pop();
                if(i==0) left_leaf = t;
                if(i==l-1) right_leaf = t;

                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        // basically answer is lca of left most and right most leaf nodes(the lowest leaves)
        return lca(root,left_leaf,right_leaf);
    }
};
