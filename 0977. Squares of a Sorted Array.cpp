class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        if(nums[0]>=0) l=-1,r=0;
        else if(nums[n-1]<0) l=n-1,r=n;
        else{
            while(l<n){
                if(nums[l]>=0) break;
                l++;
            }
            r=l;
            l--;
        }

        //cout<<l<<" "<<r;
        vector<int> ans;
        while(l>=0 && r<n){
            int x = nums[l]*nums[l],y=nums[r]*nums[r];
            if(x>y){
                ans.push_back(y);
                r++;
            }
            else if(x<y){
                ans.push_back(x);
                l--;
            }
            else {
                ans.push_back(x);
                ans.push_back(y);
                l--;
                r++;
            }
        }
        while(l>=0){
            ans.push_back(nums[l]*nums[l]);
            l--;
        }
        while(r<n){
            ans.push_back(nums[r]*nums[r]);
            r++;
        }
        return ans;
    }
};
