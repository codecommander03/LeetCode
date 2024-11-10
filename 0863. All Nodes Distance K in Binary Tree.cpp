class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int,TreeNode*> par;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();

            if(temp->left){
                q.push(temp->left);
                par[temp->left->val] = temp;
            }

            if(temp->right){
                q.push(temp->right);
                par[temp->right->val] = temp;
            }
        }
        q.push(target);
        unordered_map<int,int> vis;
        while(k-- && !q.empty()){
            int s = q.size();

            while(s--){
                TreeNode* temp = q.front();
                q.pop();
                //if(vis[temp->val] == true) continue;
                vis[temp->val] = true;

                if(temp->left && vis[temp->left->val]==false){
                    q.push(temp->left);
                }
                if(temp->right && vis[temp->right->val]==false){
                    q.push(temp->right);
                }
                if(par[temp->val] && !vis[par[temp->val]->val]){
                    q.push(par[temp->val]);
                }
            }
        }
        std::vector<int> ans;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }
        return ans;
    }
};
