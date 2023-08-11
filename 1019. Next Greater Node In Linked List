class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> temp;
        while(head){
            temp.push_back(head->val);
            head = head->next;
        }
        vector<int> ans(temp.size());
        stack<int> s;
        int val = *temp.rbegin();
        for(int i=temp.size()-1;i>=0;i--){
            while(!s.empty() && s.top()<=temp[i]) s.pop();
            if(s.empty()) ans[i] = 0;
            else ans[i] = s.top();
            s.push(temp[i]);
        }
        return ans;
    }
};
