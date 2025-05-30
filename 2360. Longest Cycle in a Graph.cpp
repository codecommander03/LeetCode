class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int ans=-1,time=1;
        int n = edges.size();
        vector<int> visit(n,0);

        for(int i=0;i<n;i++){
            if(visit[i]) continue;

            const int start_time = time;
            int st=i;
            while(st!=-1 && visit[st]==0){
                visit[st]=time++;
                st = edges[st];
            }

            if(st!=-1 && visit[st]>=start_time){
                ans = max(ans,time-visit[st]);
            }
        }
        return ans;
    }
};
