class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL) return v;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);

        while(!s1.empty() || !s2.empty()){
            vector<int> temp;
            while(!s1.empty()){
                TreeNode* tmp = s1.top();
                temp.push_back((s1.top())->val);
                s1.pop();
                if(tmp->left!=NULL) s2.push(tmp->left);
                if(tmp->right!=NULL) s2.push(tmp->right);
            }
            if(temp.size()) v.push_back(temp);
            temp.clear();
            while(!s2.empty()){
                TreeNode* tmp = s2.top();
                temp.push_back(tmp->val);
                s2.pop();
                if(tmp->right!=NULL) s1.push(tmp->right);
                if(tmp->left!=NULL) s1.push(tmp->left);
            }
            if(temp.size()) v.push_back(temp);
            temp.clear();
        }
        return v;
    }
};
