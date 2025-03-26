class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        while(--k) fast = fast->next;
        ListNode* slow = head;
        ListNode* f = fast;
        
        while(fast->next){
            fast = fast->next;
            slow=slow->next;
        }
        swap(slow->val,f->val);
        return head;
    }
};
