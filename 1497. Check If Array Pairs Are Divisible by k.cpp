class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for(int i: arr) m[(i%k+k)%k]++;
        int i=0,j=k;
        while(++i<--j){
            if(m[i]!=m[j]) return false;
        }
        return m[0]%2==0;
    }
};
