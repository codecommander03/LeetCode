class TrieNode{
public:
    TrieNode* children[26];
    bool lastchar;

    TrieNode(){
        lastchar = false;
        for(int i=0;i<26;i++) children[i] = NULL;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for(char c: word){
            int i = c - 'a';
            if(curr->children[i]==NULL) curr->children[i] = new TrieNode();
            curr = curr->children[i];
        }
        curr->lastchar = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(char c: word){
            int i = c - 'a';
            if(curr->children[i]==NULL) return false;
            curr = curr->children[i];
        }
        return curr->lastchar;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(char c: prefix){
            int i = c - 'a';
            if(curr->children[i]==NULL) return false;
            curr = curr->children[i];
        }
        return true;
    }
};
