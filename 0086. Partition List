class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* s=new ListNode(); // head of smaller ll
        ListNode* st=s;             // temp of smaller ll
        ListNode* b= new ListNode();// head of bigger ll
        ListNode* bt=b;             // temp of bigger ll
        
        while(head){
            if(head->val>=x){
                bt->next=new ListNode(head->val);
                bt=bt->next;
            }
            else{
                st->next=new ListNode(head->val);
                st=st->next;
            }
            head=head->next;
        }
        st->next=b->next;
        
        return s->next;
    }
};
