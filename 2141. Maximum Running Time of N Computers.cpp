class Solution {
    bool check(vector<int>&b,long long time,int n){
        long long all=0;
        for(int i: b){
            all += i;
            if(all >= time){
                all -= time;
                n--;
            }
            if(n==0) return true;
        }
        return false;
    }
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long l = 1,r=0;
        for(int i: batteries) r+=i;
        r /= n;

        sort(batteries.begin(),batteries.end());

        while(l<r){
            long long mid = l + (r-l+1)/2;
            if(check(batteries,mid,n)) l = mid;
            else r = mid-1;
        }
        return l;
    }
};
