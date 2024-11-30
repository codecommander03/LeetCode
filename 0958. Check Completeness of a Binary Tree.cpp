class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*> q;
        q.push(root);
        bool leaf_level = false;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();

            if(front==NULL) leaf_level = true;
            else{
                if(leaf_level) return false;
                q.push(front->left);
                q.push(front->right);
            }
        }
        return true;
    }
};
