class Solution {
public:
    vector<int> v;
    void trv(TreeNode* root){
        if(root==NULL) return;
        v.push_back(root->val);
        trv(root->left);
        trv(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        trv(root);
        sort(v.begin(),v.end());
        int ans = 1e9;
        for(int i=1;i<v.size();i++){
            ans = min(ans,v[i]-v[i-1]);
        }
        return ans;
    }
};
