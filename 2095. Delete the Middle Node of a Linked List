class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        if(head->next->next==NULL){
            head->next=head->next->next;
            return head;
        }
        ListNode* fast = head->next->next;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast-> next -> next;
            slow = slow -> next;
        }
        slow-> next = slow-> next -> next;
        return head;
    }
};
