class Solution {
public:
     class TrieNode {
    public:
        bool eon = false; // eon = End of No.
        TrieNode *children[10];
    };
    
    class Trie {
    public:
        TrieNode *root;
        
        Trie() {
            root = new TrieNode();
        }
        
        void insert(int x,int s){
            TrieNode *curr = root;
            while(s){
                int idx=x/s;
                if(!curr->children[idx]) curr->children[idx] = new TrieNode();
                curr = curr->children[idx]; x%=s; s/=10;
            }
            curr->eon = true;
        }
        
        void getLexicalOrder(TrieNode *root, vector<int> &ans, int num = 0){
            for(int i=0;i<10;i++){
                if(!root->children[i]) continue; 
                if(root->children[i]->eon) ans.push_back(num+i);
                getLexicalOrder(root->children[i],ans, (num+i)*10);
            }
        }    
    };
    vector<int> lexicalOrder(int n) {
        Trie trie;
        for(int i=1;i<=n;i++){
            if(i<10) trie.insert(i,1);
            else if(i<100) trie.insert(i,10);
            else if(i<1000) trie.insert(i,100);
            else if(i<10000) trie.insert(i,1000);
            else trie.insert(i,10000);
        }
        vector<int> ans;
        trie.getLexicalOrder(trie.root, ans);
        return ans;
    }
