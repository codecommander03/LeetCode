class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](const vector<int>&a,const vector<int>&b){return a[1]<b[1];});
        //for(auto i: pairs) cout<<i[0]<<" "<<i[1]<<"\n";
        int ind = 0,cnt = 1;
        for(int i=1;i<pairs.size();i++){
            if(pairs[ind][1]<pairs[i][0]){
                cnt++;
                ind=i;
            }
        }
        return cnt;
    }
};
