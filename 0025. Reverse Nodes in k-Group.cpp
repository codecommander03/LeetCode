class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* now = head;
        int cnt = 0;
        while(cnt<k && now!=NULL) now=now->next,cnt++;
        if(cnt<k) return head;

        ListNode* prev = NULL;

        while(cnt-- && head!=NULL){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        ListNode* tail = prev;
        while(tail!=NULL && tail->next!=NULL) tail = tail->next;
        
        if(head != NULL) tail->next = reverseKGroup(head,k);
        else tail->next = NULL;
        return prev;
    }
};
