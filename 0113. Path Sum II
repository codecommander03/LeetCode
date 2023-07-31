class Solution {
public:
    vector<vector<int>> ans;
    void help(TreeNode* curr,int sum,int target,vector<int>&v){
        if(curr == NULL) return;
        sum += curr->val;
        v.push_back(curr->val);
        if(sum==target && curr->left==NULL && curr->right==NULL) ans.push_back(v);
        help(curr->left,sum,target,v);
        help(curr->right,sum,target,v);
        sum -= curr->val;
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        help(root,0,targetSum,v);
        return ans;
    }
};
