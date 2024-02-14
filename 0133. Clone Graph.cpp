class Solution {
public:
    Node* dfs(Node* node,unordered_map<Node*,Node*> &m){
        Node* parent = new Node(node->val);
        m[node]=parent;
        vector<Node*> childs;
        for(Node* i: node->neighbors){
            if(m.find(i) == m.end()){
                childs.emplace_back(dfs(i,m));
            }
            else{
                childs.emplace_back(m[i]);
            }
        }
        parent->neighbors = childs;
        return parent;
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        unordered_map<Node*,Node*> m;
        
        return dfs(node,m);
    }
};
