class Solution {
public:
    vector<int> v;
    unordered_map<int,int> m;
    void dfs(TreeNode* root){
        if(root==NULL) return;
        v.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    void dfs2(TreeNode* root){
        if(root==NULL) return;
        root->val = m[root->val];
        dfs2(root->left);
        dfs2(root->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        sort(begin(v),end(v));
        int sum = 0;
        for(int i = v.size()-1;i>=0;i--){
            sum += v[i];
            m[v[i]] = sum;
        }
        dfs2(root);
        return root;
    }
};
