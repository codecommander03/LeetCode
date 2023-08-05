class Solution {
public:
    bool can(vector<int>& ranks,int cars,long long time){
        int cnt = 0;
        for(int i: ranks){
            cnt += sqrt(time/i);
            if(cnt>=cars) return true;
        }
        return cnt>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long l=0,r=1e14;
        while(l<r){
            long long mid = l + (r-l)/2;
            if(can(ranks,cars,mid)){
                r=mid;
            }
            else l=mid+1;
        }
        return l;
    }
};
