class Solution {
public:
    int len(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA==NULL || headB==NULL) return NULL;
        int la = len(headA), lb = len(headB);

        if(la>= lb){
            while(la>lb){
                headA = headA->next;
                la--;
            }
        }
        else{
            while(lb>la){
                headB = headB->next;
                lb--;
            }
        }
        while(headA){
            if(headA==headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
