class Solution {
public:
    unordered_map<int,int> m;
    int ma=0;
    int help(TreeNode* root){
        if(root==NULL) return 0;
        int sum = root->val;
        if(root->left) sum += help(root->left);
        if(root->right) sum += help(root->right);
        ma = max(ma,++m[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        help(root);
        vector<int> res;
        for(auto &[a,b]: m){
            if(b==ma) res.push_back(a);
        }
        return res;
    }
};
