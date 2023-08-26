class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        int ans = 0;
        for(auto i: root->children) ans = max(ans,maxDepth(i));
        return 1 + ans;
    }
};
