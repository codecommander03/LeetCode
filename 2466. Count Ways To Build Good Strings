class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        
        unordered_map<int,int> m;
        m[0] = 1;
        int mod = 1e9 + 7;

        for(int i=1;i<=high;i++){
            int z=0,o=0;
            if(m.count(i-zero)) z = m[i-zero];
            if(m.count(i-one)) o = m[i-one];

            m[i] = (z+o)%mod;
        }

        int ans = 0;
        for(int i=low;i<=high;i++){
            if(m.count(i)) ans = (ans+m[i])%mod;
        }
        return ans;
    }
};
