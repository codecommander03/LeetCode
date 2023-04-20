class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL) return 0;
        long long ans = 0;
        while(head!=NULL){
            ans *= 2;
            ans += (long long)(head->val);
            head = head->next;
        }
        return ans;
    }
};
