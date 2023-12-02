class Solution {
public:
    int bs(vector<int>& nums,int k,bool parity){
        int l=0,r=nums.size()-1,ans=-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==k){
                ans = mid;
                if(parity){
                    r = mid-1;
                }
                else l = mid+1;
            }
            else if(nums[mid]>k) r=mid-1;
            else l = mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        int x = bs(nums,target,true);
        if(x==-1) return ans;
        ans[0] = x;
        x = bs(nums,target,false);
        ans[1]=x;
        return ans;
    }
};
