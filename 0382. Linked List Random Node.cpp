class Solution {
public:
    ListNode* front;
    int n;

    Solution(ListNode* head) {
        front = head;
        n=0;
        while(front!=NULL){
            front=front->next;
            n++;
        }
        front=head;
    }
    int getRandom() {
        int r = rand() % n;
        ListNode* temp = front;
        while(r--){
            temp = temp->next;
        }
        return temp->val;
    }
};
