class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        unordered_map<Node*,Node*> m;

        Node* ans = new Node(-1);
        Node* temp = head,*curr = ans;
        
        while(temp != NULL){
            curr->val = temp->val;
            m[temp] = curr;
            if(temp->next==NULL) break;
            Node* te = new Node(-1);
            curr->next = te;
            curr = te;
            temp = temp->next;
        } 
        temp = head;
        curr = ans;
        while(temp){
            curr->random = (temp->random) ? m[temp->random] : NULL;
            temp = temp->next;
            curr = curr->next;
        } 
        return ans;
    }
};
