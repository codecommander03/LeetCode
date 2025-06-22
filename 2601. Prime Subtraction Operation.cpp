class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        vector<int> prime(1001,true);
        prime[0] = false;
        prime[1] = false;
        for(int i=2;i<=1000;i++){
            if(prime[i]){
                for(int j=i*i;j<=1000;j+=i) prime[j]=false;
            }
        }
        vector<int>p;
        for(int i=2;i<=999;i++) if(prime[i]) p.emplace_back(i);
        for(int i=0;i<nums.size();i++){
            if(i && nums[i-1]>=nums[i]) return false;
            int ind = lower_bound(p.begin(),p.end(),nums[i]) - p.begin();
            for(int j=ind-1;j>=0;j--){
                if(i==0 || nums[i]-p[j]>nums[i-1]){
                    nums[i] -= p[j];
                    break;
                }
            }
        }
        return true;
    }
};
