class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1){
            return NULL;
        }
        ListNode* temp = head;
        while(n--){
            temp=temp->next;
        }
        ListNode* del = head;
        if(temp==NULL) return head->next;
        while(temp->next != NULL){
            temp=temp->next;
            del=del->next;
        }
        del->next=del->next->next;
        return head;
    }
};
