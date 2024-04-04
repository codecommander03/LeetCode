class Solution {
public:
    vector<vector<int>> ans;
    void help(int k,int n,vector<int>& curr,int sum,int index){
        if(sum>n){
            return;
        }
        if(sum==n){
            if(curr.size()==k) ans.emplace_back(curr);
            return;
        }
        for(int i=index;i<=n-sum && i<=9;i++){
            curr.emplace_back(i);
            help(k,n,curr,sum+i,i+1);
            curr.pop_back();
            //help(k,n,curr,sum,i+1);
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        help(k,n,curr,0,1);
        return ans;
    }
};
