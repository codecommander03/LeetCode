class Solution {
public:
    void pre(Node* root,vector<int> &v){
        v.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            pre(root->children[i],v);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> v;
        if(root==NULL) return v;
        pre(root,v);
        return v;
    }
};
