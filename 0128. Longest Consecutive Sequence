class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
        cout.tie(NULL);
        int n = nums.size();
        if(n==0) return 0;

        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int j=i+1;
            int cnt=1;
            int prev=i;
            while(j<n && nums[j]-nums[j-1]<=1){
                cnt+=(nums[j]-nums[j-1]);
                j++;
            }
            i=j-1;
            ans=max(ans,cnt);
        }
        return ans;
    }
};
