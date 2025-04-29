class Solution {
public:
    bool path(TreeNode* root,int goal,string&s){
        if(root==NULL) return false;
        if(root->val==goal) return true;

        bool l = path(root->left,goal,s);
        if(l){
            s += 'L';
            return true;
        }
        bool r = path(root->right,goal,s);
        if(r){
            s += 'R';
            return true;
        }
        return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string to_start = "",to_end="";
        path(root,startValue,to_start);
        path(root,destValue,to_end);

        while(!to_start.empty() && !to_end.empty() && *to_start.rbegin()==*to_end.rbegin()){
            to_start.pop_back();
            to_end.pop_back();
        }

        for(char &c: to_start) c = 'U';
        reverse(begin(to_end),end(to_end));
        return to_start + to_end;
    }
};
