class Solution {
public:
// https://www.geeksforgeeks.org/topological-sorting/
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        //int n = numCourses;
        vector<int> graph[numCourses];
        for(auto i: prerequisites){
            graph[i[1]].emplace_back(i[0]); // x -> y : x unlocks y
        }

        vector<int> degree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto j: graph[i]){
                degree[j]++;
            }
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(degree[i]==0) q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            ans.emplace_back(temp);

            for(auto i: graph[temp]){
                degree[i]--;
                if(!degree[i]) q.push(i);
            }
        }
        if(ans.size()==numCourses) return ans;
        return {};
        degree.clear();
    }
};
