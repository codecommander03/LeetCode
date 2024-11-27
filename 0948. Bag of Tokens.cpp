class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans = 0,curr = 0;
        sort(tokens.begin(),tokens.end());

        while(!tokens.empty()){
            if(power>=tokens[0]){
                power -= tokens[0];
                tokens.erase(tokens.begin());
                curr++;
            }
            else if(curr>=1){
                power += *tokens.rbegin();
                tokens.erase(tokens.begin()+tokens.size()-1);
                curr--;
            }
            else break;
            ans = max(ans,curr);
            //for(int i: tokens) cout<<i<<" ";
            //cout<<"-"<<power<<endl;
        }
        return ans;
    }
};
