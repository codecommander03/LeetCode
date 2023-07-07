class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(nullptr);
        std::cin.tie(nullptr);
        int t=0,f=0,i=0,j=0,ans = 0,n = answerKey.size();
        while(j<n){
            if(answerKey[j] == 'T') t++;
            else f++;
            while(t>k && f>k){
                if(answerKey[i]=='T') t--;
                else f--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
