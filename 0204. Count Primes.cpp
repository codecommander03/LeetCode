class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n,0);
        if(n==0 || n==1 || n==2) return 0;
        v[2]=1;
        for(int i=3;i<n;i+=2){
            v[i] =1;
        }
        for(int i=3;i<n;i++){
            if(v[i]){
                if(sqrt(n)<i) continue;
                for(int j=i*i;j<n;j+=i) v[j]=0;
            }
        }
        int ans=0;
        for(int i: v){
            if(i) ans++;
        }
        return ans;
    }
};
