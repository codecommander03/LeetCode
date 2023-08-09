class Solution {
public:
    int n;
    bool valid(vector<int>&v,int maxn,int p){
        int i=0;
        while(i<n-1 && p>0){
            if(abs(v[i+1]-v[i])<=maxn){
                p--;
                i+=2;
            }
            else i++;
        }
        if(p<=0) return true;
        return false;
    }
    int minimizeMax(vector<int>& nums, int p) {
        n = nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=1e9;
        int ans=1e9;
        
        while(l<=r){
            int mid = l + (r-l)/2;;
            if(valid(nums,mid,p)){
                ans = min(ans,mid);
                r = mid-1;
            }
            else l = mid+1;
        }
        return l;
    }
};
