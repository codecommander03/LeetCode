class Solution {
public:
    TreeNode* helper(vector<int>& nums,int l,int r){
        if(l<=r){
            int mid = l + (r-l)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = helper(nums,l,mid-1);
            root->right = helper(nums,mid+1,r);
            return root;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        TreeNode* root = helper(nums,0,n-1);
        return root;
    }
};
