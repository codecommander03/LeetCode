class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int res=0;
        for(int i: nums){
            if(m[k-i]){
                res++;
                m[k-i]--;
            }
            else m[i]++;
        }
        return res;
    }
};
