class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev={1};
        if(rowIndex==0) return prev;
        prev={1,1};
        if(rowIndex==1) return prev;
        vector<int> ans;
        for(int i=2;i<=rowIndex;i++){
            ans.clear();
            ans.push_back(1);
            for(int j=0;j<i-1;j++){
                ans.push_back(prev[j]+prev[j+1]);
            }
            ans.push_back(1);
            prev=ans;
        }
        return ans;
    }
};
