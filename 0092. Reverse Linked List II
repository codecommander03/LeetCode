class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || left==right || head->next==NULL) return head;

        ListNode* fake = new ListNode(0);
        fake->next = head;
        ListNode* prev = fake;

        for(int i=0;i<left-1;i++) prev = prev->next;
        ListNode* curr = prev->next;

        for(int i=0;i<right-left;i++){
            ListNode* fwd = curr->next;
            curr->next = fwd -> next;
            fwd->next = prev->next;
            prev->next = fwd;
        }
        return fake->next;
    }
};
