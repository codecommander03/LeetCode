class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini=INT_MAX,aux=0,maxi=0;
        for(int i=0;i<n;i++){
            if(prices[i]<mini) mini=prices[i];
            //aux = prices[i]-mini;
            if(prices[i]-mini>maxi) maxi=prices[i]-mini;
        }
        return maxi;
    }
};
