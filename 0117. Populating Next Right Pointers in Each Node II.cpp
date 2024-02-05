class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            while(s--){
                Node* t = q.front();
                q.pop();
                if(s) t->next = q.front();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return root;
    }
};
