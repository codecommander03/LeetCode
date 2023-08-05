class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector<int> v(value,0);
        int n = nums.size();
        for(int i:nums){
            v[((i%value)+value)%value]++;
        }
        for(int i=0;i<=n;i++){
            if(v[i%value]==0) return i;
            v[i%value]--;
        }
        return -1;
    }
};
