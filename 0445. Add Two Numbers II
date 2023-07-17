class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1,v2;
        ListNode* temp = l1;
        while(temp != NULL){
            v1.insert(v1.begin(),temp->val);
            temp = temp -> next;
        }
        temp = l2;
        while(temp != NULL){
            v2.insert(v2.begin(),temp->val);
            temp = temp -> next;
        }
        if(v2.size()>v1.size()){
            swap(v1,v2);
            swap(l1,l2);
        }
        int carry = 0;
        for(int i=0;i<v1.size();i++){
            int s1= v1[i];
            int s2 = 0;
            if(i<v2.size()) s2 = v2[i];
            int sum = s1 + s2 + carry;
            v1[i] = sum%10;
            carry = sum/10;
        }
        temp = l1;
        for(int i=v1.size()-1;i>=0;i--){
            temp->val = v1[i];
            temp = temp -> next;
        }

        if(carry){
            temp = new ListNode(carry);
            temp -> next = l1;
            l1 = temp;
        }
        return l1;
    }
};
