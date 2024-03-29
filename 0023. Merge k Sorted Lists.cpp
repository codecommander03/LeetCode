class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> pq;
        //int n = lists.size();
        for(auto i: lists){
            if(i != NULL) pq.push({i->val,i});
        }
        ListNode* main = new ListNode(1);
        ListNode* mov = main;

        while(!pq.empty()){
            pair<int,ListNode*> p = pq.top();
            pq.pop();

            ListNode* temp = new ListNode(p.first);
            mov->next = temp;
            mov = mov->next;

            if(p.second->next != NULL){
                p.second = p.second->next;
                p.first = p.second->val;
                pq.push(p);
            }
        }
        return main->next;
    }
};
