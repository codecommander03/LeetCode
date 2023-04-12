class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<bool> v(n+2,false);
        v[0] = true;
        for(int i: nums){
            if(i>0 && i<=n+2) v[i]=true;
        }
        for(int i=0;i<n+2;i++){
            if(!v[i]) return i;
        }
        return -1;
    }
};
