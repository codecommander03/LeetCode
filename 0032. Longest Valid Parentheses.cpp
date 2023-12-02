class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        if(n==0) return 0;
        stack<int> S;
        S.push(-1);
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                S.push(i);
            }
            else{
                if(S.size()==1) S.top()=i;
                else{
                    S.pop();
                    ans=max(ans,i-S.top());
                }
            }
        }
        return ans;
    }
};
