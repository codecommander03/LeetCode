class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL) return {""};
        vector<string> ans;
        
        if(root->left && root->right){
            vector<string> l = binaryTreePaths(root->left);
            for(string&s: l){
                ans.push_back(to_string(root->val)+"->"+s);
            }
            vector<string> r = binaryTreePaths(root->right);
            for(string&s: r){
                ans.push_back(to_string(root->val)+"->"+s);
            }
        }
        else if(root->left){
           vector<string> l = binaryTreePaths(root->left);
            for(string&s: l){
                ans.push_back(to_string(root->val)+"->"+s);
            }
        }
        else if(root->right){
            vector<string> r = binaryTreePaths(root->right);
            for(string&s: r){
                ans.push_back(to_string(root->val)+"->"+s);
            }
        }
        else ans.push_back(to_string(root->val));
        return ans;
    }
};
