class Solution {
public:
    vector<int> v;
    int ans;
    bool similar(string &a,string &b){
        int n = 0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                n++;
                if(n>2) return false;
            }
        }
        return true;
    }
    int find(int i){
        while(i != v[i]){
            i = v[i];
        }
        return i;
    }
    void join(int i,int j){
        int i1=find(i),j1=find(j);
        if(v[i1] != v[j1]){
            v[i1] = j1;
            ans--;
        }
    }
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        v.resize(n);
        ans = n;
        for(int i=0;i<n;i++){
            v[i] = i;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if( similar(strs[i],strs[j]) ){
                    join(i,j);
                }
            }
        }
        return ans;
    }
};
