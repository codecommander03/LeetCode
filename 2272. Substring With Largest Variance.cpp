class Solution {
public:
    int largestVariance(string s) {
        int cnt1=0,cnt2=0,ans=0;

        unordered_set<char> st(s.begin(),s.end());

        for(int i=0;i<2;i++){
            for(char c1: st){
                for(char c2: st){
                    if(c1 == c2) continue;

                    cnt1 = cnt2 = 0;

                    for(char j: s){
                        if(j == c1) cnt1++;
                        else if(j == c2) cnt2++;

                        if(cnt1 < cnt2) cnt1 = cnt2 = 0;
                        else if(cnt1>0 && cnt2>0){
                            ans = max(ans,cnt1-cnt2);
                        }
                    }
                }
            }
            reverse(s.begin(),s.end());
        }
        return ans;
    }
};
