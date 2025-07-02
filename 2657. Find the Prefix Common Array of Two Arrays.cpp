class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> a,b;
        int n = A.size();
        vector<int> C(n,0);
        for(int i=0;i<n;i++){
            a[A[i]]++;
            b[B[i]]++;
            for(auto it: a){
                C[i] += min(it.second,b[it.first]);
            }
        }
        return C;
    }
};
