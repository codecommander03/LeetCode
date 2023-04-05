class Solution {
public:
    bool helper(vector<int> &nums,int x){
        long long sum=0;
        for(int i: nums){
            if(i<=x){
                sum+=x-i;
            }
            else{
                if(sum >= i-x){
                    sum -= (i-x);
                }
                else return false;
            }
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int l = 0,r = *max_element(nums.begin(),nums.end());
        while(l<r){
            //int mid = (l+r)/2;
            int mid = l + (r-l)/2;
            if(helper(nums,mid)){
                r = mid;
                //l = mid+1;
            }
            else{
                l = mid+1;
                //r = mid;
            }
        }
        return l;
    }
};
