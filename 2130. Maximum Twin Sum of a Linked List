class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.emplace_back(head->val);
            head=head->next;
        }
        int i=0,j=v.size()-1;
        int ans = INT_MIN;
        while(i<j){
            ans = max(ans,v[i]+v[j]);
            i++;
            j--;
        }
        return ans;
    }
};
