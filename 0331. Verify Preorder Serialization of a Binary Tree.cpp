class Solution {
public:
    bool isValidSerialization(string preorder) {
        if(preorder.empty()) return false;
        int n = preorder.size(),cap = 1;
        for(int i=0;i<n;i++){
            if(preorder[i]==',') continue;

            if(--cap<0) return false;

            if(preorder[i]!='#'){
                cap+=2;
                while(i+1<n && preorder[i+1]!='#' && preorder[i+1]!=',') i++;
            }
        }
        return cap==0;
    }
};
