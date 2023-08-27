class Solution {
public:
    vector<int> v;
    void post(Node* root){
        if(root==NULL) return;
        for(auto i: root->children) post(i);
        v.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        post(root);
        return v;
    }
};
