class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* start = new TreeNode(val);
            start->left = root;
            return start;
        }

        queue<TreeNode*> q;
        q.push(root);

        int d = 1;

        while(++d<depth){
            int sz = q.size();
            while(sz--){
                TreeNode* fr = q.front();
                q.pop();
                if(fr->left) q.push(fr->left);
                if(fr->right) q.push(fr->right);
            }
        }
        while(!q.empty()){
            TreeNode* fr = q.front();
            q.pop();

            TreeNode* temp = new TreeNode(val);
            TreeNode* temp2 = new TreeNode(val);

            temp->left = fr->left;
            temp2->right = fr->right;

            fr->left = temp;
            fr->right = temp2;
        }

        return root;
    }
};
