class Solution {
public:
    bool detectCapitalUse(string &word) {
        bool afterfirstallshort = true,allcapital = isupper(word[0]);
        for(int i=1;i<word.size();i++){
            if(!afterfirstallshort && !allcapital) break;
            isupper(word[i]) ? afterfirstallshort = false : allcapital = false;
            
        }
        return (allcapital || afterfirstallshort);

    }
};
