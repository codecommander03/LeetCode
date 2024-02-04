class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL || root->left==NULL) return root; 
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                Node* fr = q.front();
                q.pop();
                if(n) fr-> next = q.front();
                if(fr->left!=NULL){
                    q.push(fr->left);
                    q.push(fr->right);
                }
            }
        }
        return root;
    }
};
