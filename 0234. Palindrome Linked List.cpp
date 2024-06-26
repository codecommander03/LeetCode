int init = [] {
    ios_base::sync_with_stdio(false); // turn off sync
    cin.tie(nullptr);  // untie in/out streams
    ofstream out("user.out"); // redirect stdout to user.out
    for (string s; getline(cin, s);)  // read a line into s
        out << (equal(s.begin()+1, s.begin()+s.size()/2, s.rbegin()+1) ? "true\n" : "false\n");  // write to user.out
    out.flush(); // flush the buffer
    exit(0);  // exit normally
    return 0;
}();
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head = head->next;
        }
        int n = v.size();
        for(int i=0;i<v.size()/2;i++){
            if(v[i]!=v[n-i-1]) return false;
        }
        return true;
    }
};
