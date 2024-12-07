class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        vector<int> par(101,0);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            bool a=false,b=false;
            while(s--){
                auto t = q.front();
                q.pop();
                a |= (t->val==x);
                b |= (t->val==y);
                if(a && b && par[x] != par[y] && par[x] && par[y]) return true;
                if(t->left){
                    par[t->left->val] = t->val;
                    q.push(t->left);
                }
                if(t->right){
                    par[t->right->val] = t->val;
                    q.push(t->right);
                }
            }
        }
        return false;
    }
};
