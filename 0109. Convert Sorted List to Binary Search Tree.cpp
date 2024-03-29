class Solution {
public:
    TreeNode* construct(ListNode* l,ListNode* r){
        if(l==r) return NULL;
        ListNode* slow = l,*fast = l;
        while(fast!=r && fast->next!=r){
            fast = fast->next->next;
            slow = slow->next;
        }
        TreeNode* root = new TreeNode(slow->val);
        root->left = construct(l,slow);
        root->right = construct(slow->next,r);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL){
            TreeNode* root = new TreeNode(head->val);
            return root;
        }
        return construct(head,NULL);
    }
};
