class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v(n);
        iota(v.begin(),v.end(),0);
        int start = 0;
        while(v.size()>1){
            int end = (start + k - 1)%(v.size());

            v.erase(v.begin() + end);

            start = end;
        }
        return v[0]+1;
    }
};
