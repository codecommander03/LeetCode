class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int n = machines.size(),sum = 0;
        sum = accumulate(begin(machines),end(machines),sum);
        if(sum%n) return -1;
        sum /= n;
        int ans = 0,net=0;
        for(int &i: machines){
            net += i - sum;
            ans = max(ans,max(i-sum,abs(net)));
        }
        return ans;
    }
};
