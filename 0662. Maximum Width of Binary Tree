class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return 1;
        queue< pair<TreeNode*,int> > q;
        q.push({root,0});

        int ans = 0;
        while(!q.empty()){
            int n = q.size();
            int si = q.front().second;
            int ei = q.back().second;
            
            ans = max(ans,ei-si+1);
            while(n--){
                TreeNode* tmp = q.front().first;
                int num = q.front().second - si;
                q.pop();

                if(tmp->left) q.push({tmp->left,2LL*num+1});
                if(tmp->right) q.push({tmp->right,2LL*num+2});
            }

        }
        return ans;
    }
};
