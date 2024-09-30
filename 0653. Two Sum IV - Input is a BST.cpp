class Solution {
public:
    void inorder(TreeNode* root,vector<int> &v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.emplace_back(root->val);
        inorder(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        vector<int> v;
        // binary search
        inorder(root,v);
        int l=0,r=v.size()-1;
        while(l<r){
            if(v[l]+v[r]==k) return true;
            if(v[l]+v[r]<k) l++;
            else r--;
        }
        return false;
    }
};
