class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> m;
        ListNode* tmp = head;
        while(tmp){
            m[tmp->val]++;
            tmp = tmp->next;
        }
        tmp = head;
        ListNode* prev = new ListNode(-1);
        prev->next = head;
        ListNode* ans = NULL;
        while(tmp){
            if(m[tmp->val]==1){
                if(ans == NULL) ans = tmp;
                prev = tmp;
                tmp = tmp->next;
                
            }
            else{
                tmp = tmp->next;
                prev->next = tmp;
            }
        }
        return ans;
    }
};
