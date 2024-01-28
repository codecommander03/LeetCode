class Solution {
public:
    TreeNode* helper(int &i,vector<int>& in,vector<int>& po,int l,int r){
        // i is the root index in postorder
        if(l>r) return NULL;
        int x = r;
        while(po[i]!=in[x]) x--;
        i--;
        TreeNode* root = new TreeNode(in[x]);
        root->right = helper(i,in,po,x+1,r);
        root->left = helper(i,in,po,l,x-1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size()-1;
        return helper(n,inorder,postorder,0,(int)inorder.size()-1);
    }
};
