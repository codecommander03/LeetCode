class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int ans=0;
        int i=num.size()-1;
        int sum=0;
        while(i>=0){
            sum+=num[i]+k%10;
            num[i]=sum%10;
            sum /= 10;
            k/=10;
            i--;
        }
        k+=sum;
        while(k>0){
            auto it = num.emplace(num.begin(), k%10);
            k/=10;
        }
        return num;
    }
};
