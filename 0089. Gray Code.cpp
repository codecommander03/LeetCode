class Solution {
public:
    vector<int> grayCode(int n) {
        int N = 1<<n;
        vector<int> v(N);
        for(int i=0;i<N;i++){
            v[i] = (i ^ (i>>1));
        }
        return v;
    }
};
