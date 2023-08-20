class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> v;
        ListNode* t = head;
        while(t){
            v.push_back(t->val);
            t = t->next;
        }
        sort(begin(v),end(v));
        t = head;
        int i=0;
        while(t){
            t->val=v[i++];
            t = t->next;
        }
        return head;
    }
};
