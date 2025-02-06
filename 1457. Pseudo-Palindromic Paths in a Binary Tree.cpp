class Solution {
public:
    int arr[10];
    bool isPath(){
        bool flag = false;
        for(int i=0;i<10;i++){
            if(arr[i]%2){
                if(flag) return false;
                flag = true;
            }
        }
        return true;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root==NULL) return 0;
        arr[root->val]++;
        int cnt = 0;
        if(root->left==NULL && root->right==NULL){
            if(isPath()) cnt = 1;
        }

        cnt += pseudoPalindromicPaths(root->left) + pseudoPalindromicPaths(root->right);

        arr[root->val]--;

        return cnt;

    }
};
