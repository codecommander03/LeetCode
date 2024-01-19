class Solution {
public:
    map<pair<int,int>,vector<TreeNode*>> m;
    vector<TreeNode*> help(int start,int end){
        vector<TreeNode*> v;
        if(start>end){
            v.push_back(NULL);
            return v;
        }
        if(start==end){
            v.push_back(new TreeNode(end));
            return v;
        }
        if(m.count({start,end})) return m[{start,end}];

        for(int i=start;i<=end;i++){
            vector<TreeNode*> l = help(start,i-1);
            vector<TreeNode*> r = help(i+1,end);
            for(auto x: l){
                for(auto y: r){
                    TreeNode* mid = new TreeNode(i);
                    mid -> left = x;
                    mid -> right = y;
                    v.push_back(mid);
                }
            }
        }
        return m[{start,end}] = v;
    }
    vector<TreeNode*> generateTrees(int n) {
        return help(1,n);
    }
};
