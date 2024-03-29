class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = l1;
        ListNode* prev = NULL;
        
        while(l1!=NULL && l2!=NULL){
            carry += l1->val+l2->val;
            
            l1->val = carry%10;
            carry/=10;

            prev = l1;
            l1 = l1->next;
            l2=l2->next;
        }

        while(l1 != NULL){
            carry+=l1->val;

            l1->val = carry%10;
            carry/=10;
            prev = l1;
            l1 = l1->next;
        }
        
        while(l2 != NULL){
            carry += l2->val;

            ListNode* temp = new ListNode(carry%10);
            carry/= 10;

            prev->next = temp;
            prev = temp;
            l2= l2->next;
        }
        while(carry){
            ListNode* temp = new ListNode(carry%10);
            carry/=10;

            prev->next=temp;
            prev=  temp;
        }

        return head;
    }
};
