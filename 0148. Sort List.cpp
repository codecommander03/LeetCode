class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // Merge Sort
        if(head==NULL||head->next==NULL) return head;
        ListNode* fast = head,*slow = head,*tmp=NULL;
        
        while(fast!=NULL && fast->next != NULL){
            tmp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        tmp ->next = NULL;

        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);
        return merge(l1,l2);
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* head = new ListNode(0);
        ListNode* tmp = head;

        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                tmp -> next = l1;
                l1 = l1 -> next;
            }
            else{
                tmp-> next = l2;
                l2 = l2->next;
            }
            tmp=tmp->next;
        }

        if(l1!=NULL){
            tmp->next = l1;
            l1 = l1->next;
            //tmp=tmp->next;
        }

        if(l2!=NULL){
            tmp->next = l2;
            l2 = l2->next;
            //tmp=tmp->next;
        }

        return head->next;
    }
};
