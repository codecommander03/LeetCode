class Solution {
public:
int v[10000+1];
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        int n = coins.size();
        vector<int> coins2;
        for(int i:coins){
            if(i>10001) continue;
            coins2.push_back(i);
            v[i]=1;
        }
        sort(coins2.begin(),coins2.end());

        for(int i=0;i<amount;i++){
            if(v[i]==0) continue;

            for(int j: coins2){
                if(j>=10001-i) break;
                if(v[i+j]==0){
                    v[i+j] = v[i]+1;
                }
                else{
                    v[i+j]=min(v[i+j],v[i]+1);
                }
            }
        }
        if(v[amount]==0) return -1;
        return v[amount];
    }
};
