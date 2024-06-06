class Solution {
public:
    const int mod = 1337;
    int cal(int a,int p){
        a %= mod;
        int res = 1;
        for(int i=0;i<p;i++){
            res = (res*a)%mod;
        }
        return res;
    }
    int superPow(int a, vector<int>& b) {
        if(a==1 || b.empty()) return 1;
        int last = *b.rbegin();
        b.pop_back();
        return cal(superPow(a,b),10) * cal(a,last) % mod;
    }
};
