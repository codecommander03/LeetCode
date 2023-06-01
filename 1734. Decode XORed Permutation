class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size()+1;
        int all = 1;
        for(int i=2;i<=n;i++) all ^= i; // all = 1^2^3^......^n

        int rem = encoded[1]; // rem = 2^3^4^....^n
        for(int i=3;i<encoded.size();i+=2){
            rem ^= encoded[i];
        }

        int first = all ^ rem;

        vector<int> ans;
        ans.push_back(first);

        for(int i: encoded){
            int temp = first ^ i;
            ans.push_back(temp);
            first = temp;
        }

        return ans;
    }
};
