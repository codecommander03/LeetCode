class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root==NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            int temp = sz;
            double sum = 0;
            while(temp--){
                TreeNode* t = q.front();
                q.pop();
                sum += t->val;
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }
            sum = 1.0*sum/sz;
            ans.push_back(sum);
        }
        return ans;
    }
};
