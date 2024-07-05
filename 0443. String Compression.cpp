class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n==1 || n==0) return n;
        int start=0,end=0;
        while(end<n){
            int count = 1;
            while( end<n-1 && chars[end]==chars[end+1]){
                count++;
                end++;
            }
            chars[start] = chars[end];
            start++;
            if(count>1){
                string str = to_string(count);
                for(char c: str){
                    chars[start] = c;
                    start++;
                }
            }
            end++;
        }
        return start;
    }
};
