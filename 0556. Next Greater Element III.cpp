class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        if(s.size()==1) return -1;

        int i = s.size() - 2;
        for(;i>=0 && s[i]>=s[i+1];i--){

        }
        if(i==-1) return -1;
        reverse(begin(s)+i+1,s.end());
        for(int j=i+1;j<s.size();j++){
            if(s[j]>s[i]){
                swap(s[i],s[j]);
                break;
            }
        }
        long ans = stol(s);
        return ans == n || ans > INT_MAX ? -1 : ans;
    }
};
