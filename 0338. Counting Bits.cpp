class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1,1);
        v[0] = 0;
        for(int i=1;i<=n;i++){
            int num=i,bit=0;
            while(num){
                bit += num%2;
                num /= 2;
            }
            v[i] = bit;
        }
        return v;
    }
};
