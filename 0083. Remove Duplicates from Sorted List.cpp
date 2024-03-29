class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!= NULL){
            if(slow->val != fast->val){
                slow->next = fast;
                slow = fast;
            }
            fast = fast->next;
        }
        slow->next = fast;
        return head;
    }
};
