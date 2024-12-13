class Solution {
public:
    int merge(vector<int> &v,int x){
        int days=1,temp=0;
        for(int i: v){
            if(temp+i<=x) temp+=i;
            else{
                days++;
                temp=i;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0,biggest = INT_MIN;
        for(int x: weights){
            sum+=x;
            biggest=max(biggest,x);
        }
        // min number will be equal to biggest (in case of infinite days)
        // max number will be equal to sum case (in case of 1 day)
        int l = biggest,r = sum;
        while(l < r){
            int mid = l + (r-l)/2;
            int curr_days = merge(weights,mid);
            if(curr_days > days) l = mid+1; // as days greater, so increase max capacity of each day
            else r = mid; // as days lesser or equal, decrease max capacity including mid
        }
        return l;
    }
};
