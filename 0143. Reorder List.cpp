class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next == NULL) return;

        ListNode* prev=NULL,*cur=head,*tmp=head;
        while(tmp->next && tmp->next->next){
            tmp = tmp->next->next;
            cur =  cur->next;
        }

        if(tmp->next) cur = cur->next;

        while(cur){ // reversing the second half 
            tmp = cur->next;
            cur->next = prev;

            prev = cur;
            cur = tmp;
        }
        cur = prev;

        while(head && cur){ // merge both halfes
            tmp = head->next;
            prev = cur->next;

            head->next = cur;
            cur->next = tmp;

            head = tmp;
            cur = prev;
        }
        if(head && head->next) head->next->next = NULL;
    }
};
