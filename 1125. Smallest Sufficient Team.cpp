class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        int n = req_skills.size(),m = people.size();
        unordered_map<string,int> skills;

        for(int i=0;i<n;i++){
            skills[req_skills[i]] = i;
        }

        vector<int>people_skill(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<people[i].size();j++){
                int temp = skills[people[i][j]];
                people_skill[i] |= (1<<temp);
            }
        }
        int s = 1<<n;
        vector<int> dp(s,INT_MAX);
        vector<int> parent(s,-1);
        vector<int> parent_state(s);
        dp[0] = 0;
        for(int i=0;i<s;i++){
            for(int j=0;j<m;j++){
                if(dp[i]==INT_MAX) continue;
                int temp = i | people_skill[j];
                if(dp[temp] > dp[i]+1){
                    parent[temp] = j;
                    parent_state[temp] = i;
                    dp[temp] = dp[i]+1;
                }
            }
        }

        int temp = s - 1;
        vector<int> ret;
        while(parent[temp] != -1){
            ret.push_back(parent[temp]);
            temp = parent_state[temp];
        }

        return ret;
    }
};
