class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> before(n),end(n);
        for(int i=1;i<n;i++){
            before[i] = before[i-1] + (customers[i-1]=='N');
        }
        if(customers[n-1]=='Y') end[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            end[i] = end[i+1] + (customers[i]=='Y');
        }
        int ans = n,index=-1;
        for(int i=n-1;i>=0;i--){
            if(before[i]+end[i]<=ans){
                index = i;
                ans = before[i]+end[i];
            }
        }
        if(customers[n-1]=='Y' && before[n-1]<ans) index = n;
        return index;
    }
};
