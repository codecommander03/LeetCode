class Solution {
public:
    priority_queue<int> pq;
    void helper(TreeNode* root,int k){
        //if(root == NULL) return;
        pq.push(root->val);
        if(pq.size()>k) pq.pop();
        if(root->left) helper(root->left,k);
        if(root->right) helper(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        helper(root,k);
        return pq.top();
    }
};
