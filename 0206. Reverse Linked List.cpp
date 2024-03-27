class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *prev=NULL;
        //ListNode *fwd = head->next;
        while(head!=NULL){
            ListNode *temp = head->next;
            head->next = prev;
            prev = head;
            head=temp;
        }
        return prev;
        
    }
};
