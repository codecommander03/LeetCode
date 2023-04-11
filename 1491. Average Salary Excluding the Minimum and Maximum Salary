class Solution {
public:
    double average(vector<int>& salary) {
        int mav=INT_MIN,miv=INT_MAX;

        int sum=0;
        for(int i: salary){
            mav=max(mav,i);
            miv=min(miv,i);
            sum+=i;
        }
        return (double)(sum-mav-miv)/(salary.size()-2);
    }
};
