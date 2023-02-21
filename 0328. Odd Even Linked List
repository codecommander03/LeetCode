https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next == NULL || head->next->next==NULL) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = even;
        
        while(odd->next && even->next){
            odd->next = even->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }

        odd->next = temp;
        return head;
    }
};
