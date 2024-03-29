class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int delta1=1,max = INT_MIN,delta2=1;
        for(int i=0;i<n;i++){
            delta1 *= nums[i];
            delta2 *= nums[n-1-i];
            if(delta1 > max) max = delta1;
            if(delta2 > max) max = delta2;
            if(delta1==0) delta1=1;
            if(delta2==0) delta2=1;
        }
        return max;
    }
};
