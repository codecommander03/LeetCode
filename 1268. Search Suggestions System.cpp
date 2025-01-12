class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        int n = products.size();
        vector<vector<string>> ans;
        string s = "";
        for(char c: searchWord){
            s += c;
            vector<string> temp;
            int ind = lower_bound(products.begin(),products.end(),s)-products.begin();
            for(int i=0;ind+i<n && i<3;i++){
                if(products[ind+i].find(s)) break;
                temp.push_back(products[ind+i]);
            }
            ans.emplace_back(temp);
        }
        return ans;
    }
};
