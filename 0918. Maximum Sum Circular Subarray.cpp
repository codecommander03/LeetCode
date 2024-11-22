class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // kedane's algo
        int n=nums.size();
        int total=0,max1=INT_MIN,max2=0,sum=0;
        for(auto i: nums){
            total+=i;
            sum+=i;
            max1=max(max1,sum);
            if(sum<0) sum=0;
        }
        sum=0;
        for(auto i: nums){
            max1 = max(max1,total+max2);
            total-=i; // right sum
            sum+=i; // left sum
            max2=max(max2,sum); // maximum left sum
        }
        return max1;
    }
};
