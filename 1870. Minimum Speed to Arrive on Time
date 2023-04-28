class Solution {
public:
    int n;
    bool cal(vector<int>& d,int t,double h){
        double ans = 0;
        for(int i=0;i<n;i++){
            if(i==n-1){
                ans += d[i]/(t*1.00);
            }
            else{
                ans+=ceil(d[i]/(t*1.00));
            }
        }
        //cout<<ans;
        return ans<=h;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        n = dist.size();
        int l = 1,r = 1e9;
        int ans=1e9;
        while(l<=r){
            int mid = l + (r-l)/2;
            
            if(cal(dist,mid,hour)){
                ans=min(ans,mid);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        if(ans==1e9) return -1;
        return ans;
    }
};
