class TrieNode{
public:
    vector<TrieNode*> children;
    bool end;
    TrieNode(){
        children.resize(26,NULL);
        end = false;
    }

};

class WordDictionary {
public:
    TrieNode* root;

    WordDictionary() {
        root = new TrieNode();    
    }
    
    void addWord(string word) {
        TrieNode* curr = root;
        for(char c: word){
            int i = c - 'a';
            if(curr->children[i]==NULL) curr->children[i] = new TrieNode();
            curr = curr->children[i];
        }
        curr->end = true;
    }
    
    bool search_helper(string &word,int ind,TrieNode* curr){
        if(ind == word.size()) return curr->end;

        if(word[ind]=='.'){
            for(int i=0;i<26;i++){
                TrieNode* next = curr->children[i];
                if(next && search_helper(word,ind+1,next)){
                    return true;
                }
            }
            return false;
        }
        else{
            if(curr->children[word[ind]-'a']==NULL) return false; 
        }
        return search_helper(word,ind+1,curr->children[word[ind]-'a']); 
    }
    bool search(string word) {
        return search_helper(word,0,root);
    }
};
