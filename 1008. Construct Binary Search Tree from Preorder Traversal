class Solution {
public:
    TreeNode* construct(vector<int>&v,int&i,int bound){
        if(i>=v.size() || v[i]>bound) return NULL;
        TreeNode *root = new TreeNode(v[i++]);
        root->left = construct(v,i,root->val);
        root->right = construct(v,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return construct(preorder,i,INT_MAX);
    }
};
