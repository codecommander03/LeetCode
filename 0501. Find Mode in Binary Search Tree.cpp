class Solution {
public:
    unordered_map<int,int> m;
    int ma=0;
    void help(TreeNode* root){
        if(root==NULL) return;
        ma = max(ma,++m[root->val]);
        help(root->left);
        help(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        help(root);
        vector<int> res;
        for(auto &[a,b]: m){
            if(b==ma) res.push_back(a);
        }
        return res;
    }
};
