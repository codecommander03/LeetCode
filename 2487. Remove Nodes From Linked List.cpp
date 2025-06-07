class Solution {
public:
    ListNode* rev(ListNode* &head){
        ListNode* prev = NULL,*nxt=head;
        while(head!=NULL){
            nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = rev(head);
        ListNode* on = new ListNode(1);
        ListNode *ans = on;

        int maxval = 0;
        while(temp){
            maxval=max(maxval,temp->val);
            if(temp->val >= maxval){
                ListNode* tmp = new ListNode(temp->val);
                on->next = tmp;
                on = on->next;
            }
            temp=temp->next;
        }
        return rev(ans->next);
    }
};
