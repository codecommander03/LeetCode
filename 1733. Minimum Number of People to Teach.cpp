class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = languages.size();
        vector<vector<int>> v(m+1,vector<int>(n+1,0));
        for(int i=0;i<m;i++){
            for(int j: languages[i]){
                v[i+1][j] = 1;
            }
        }
        unordered_set<int> s;
        for(auto &itr: friendships){
            int a=itr[0],b=itr[1];
            bool talk = false;
            for(int i=1;i<=n && !talk;i++){
                if((v[a][i] && v[b][i])==1){
                    talk = true;
                    //break;
                }
            }
            if(!talk){
                s.insert(a);
                s.insert(b);
            }
        }
        vector<int> l(n+1,0);
        for(int i: s){
            for(int j: languages[i-1]) l[j]++; 
        }
        int ans = 0;
        for(int i: l) ans = max(ans,i);
        return s.size()-ans;
    }   
};
