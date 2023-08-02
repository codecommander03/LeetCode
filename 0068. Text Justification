class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int i=0;
        int n = words.size();
        while(i<n){
            int j=i,curr=0;
            curr += words[j].size();
            j++;
            string s = words[i];
            while(j<n && curr<maxWidth){
                if(curr+words[j].size()+1<=maxWidth){
                    curr += (1+words[j].size());
                    j++;
                }
                else break;
            }
            int cnt = j-i-1;
            i++;
            if(j==n){
                for(i;i<j;i++){
                    s += ' ';
                    s += words[i];
                }
                for(int k=curr;k<maxWidth;k++) s+=' ';
                ans.push_back(s);
                break;
            }
            if(cnt==0){
                for(int k=curr;k<maxWidth;k++) s+=' ';
                ans.push_back(s);
            }
            else{
                curr -= cnt;
                int space = maxWidth - curr;
                int eql = space/cnt;
                int xtra = space - eql*cnt;
                for(i;i<j;i++){
                    for(int k=0;k<eql;k++) s+=' ';
                    if(xtra){
                        xtra--;
                        s+=' ';
                    }
                    s += words[i];
                }
                ans.push_back(s);
            }
        }
        return ans;
    }
};
