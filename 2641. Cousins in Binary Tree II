class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        unordered_map<TreeNode*,int> m;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto t = q.front();
            q.pop();
            int sum=0;
            if(t->left) sum += t->left->val;
            if(t->right) sum += t->right->val;
            if(t->left){
                m[t->left] = sum;
                q.push(t->left);
            }
            if(t->right){
                m[t->right] = sum;
                q.push(t->right);
            }
        }
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);

        while(!q.empty()){
            int s = q.size();
            int sum = 0;
            while(s--){
                auto t = q.front();
                q.pop();
                sum+=t->val;
                q.push(t);
            }
            s = q.size();
            while(s--){
                auto t = q.front();
                q.pop();
                t->val = sum - m[t];
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        root->val = 0;
        return root;
    }
};
