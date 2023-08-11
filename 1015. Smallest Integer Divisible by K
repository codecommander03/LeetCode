class Solution {
public:
    int smallestRepunitDivByK(int k) {
        // int num=0;
        // for(int i=0;i<=k;i++){
        //     if((num=(num*10+1)%k)==0) return i;
        // }
        // return -1;
        if(k==1) return 1;
        long long num = 1;
        vector<bool> r(k+1,false);
        int i=0;
        while(++i){
            num %= k;
            if(num==0) return i;
            if(r[num]) return -1;
            else r[num] = true;
            num = num*10+1;
        }
        return -1;
    }
};
