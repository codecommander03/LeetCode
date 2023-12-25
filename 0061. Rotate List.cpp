class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        if(head==NULL || head->next==NULL) return head;
        int n=1;
        ListNode* end=head;
        while(end->next){
            end=end->next;
            n++;
        }
        cout<<"n="<<n<<endl;
        k = k%n;
        if(k==0) return head;
        ListNode* temp=head;
        for(int i=0;i<n-k-1;i++){
            temp = temp->next;
        }
        ListNode* next = temp->next;
        end->next = head;
        temp->next=NULL;
        return next;

    }
};
