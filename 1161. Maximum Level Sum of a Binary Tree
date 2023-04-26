class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans = 0;
        int max_sum=INT_MIN;
        int level=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int sum=0;
            level++;
            while(n--){
                TreeNode* t = q.front();
                q.pop();
                sum+=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(sum>max_sum){
                ans = level;
                max_sum = sum;
            }
        }
        return ans;
    }
};
