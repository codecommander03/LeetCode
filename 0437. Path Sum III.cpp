class Solution {
public:
    unordered_map<long,int> m;
    int res=0;

    void helper(TreeNode* root,long sum,int target){
        if(root==NULL) return;
        sum+=root->val;
        if(sum==target) res++;
        if(m[sum-target]>0) res+=m[sum-target];
        m[sum]++;
        helper(root->left,sum,target);
        helper(root->right,sum,target);
        m[sum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        helper(root,0,targetSum);
        return res;
    }
};
