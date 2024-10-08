class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0) return tasks.size();
        vector<int> v(26,0);
        int most=0;
        for(char c: tasks){
            v[c-'A']++;
            most = max(most,v[c-'A']);
        }

        int ans = (most-1)*(n+1);
        for(int i: v) if(i==most) ans++;
        if(tasks.size()<=ans) return ans;
        return tasks.size();
    }
};
