class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int> m;
        for(int i=0;i<banned.size();i++){
            m[banned[i]] = -101;
        }
        int i=1;
        int count=0;
        while(i<=n && maxSum>=i){
            if(m[i]!=-101){
                count++;
                maxSum -= i;
            }
            i++;
        }
        return count;
    }
};
