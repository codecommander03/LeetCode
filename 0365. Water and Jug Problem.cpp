class Solution {
public:
    bool dfs(vector<bool>&vis,int j1,int j2,int j,int target){
        if(j<0 || j>j1+j2 || vis[j]) return false;
        if(j==target) return true;
        vis[j] = true;
        bool a = dfs(vis,j1,j2,j-j1,target);
        bool b = dfs(vis,j1,j2,j+j1,target);
        bool c = dfs(vis,j1,j2,j-j2,target);
        bool d = dfs(vis,j1,j2,j+j2,target);
        return a | b | c | d;
    }
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        vector<bool> vis(jug1Capacity+jug2Capacity+1,false);
        return dfs(vis,jug1Capacity,jug2Capacity,0,targetCapacity);
    }
};
