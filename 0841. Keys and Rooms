class Solution {
public:
    int room_visited=0;
    void dfs(vector<vector<int>>& rooms,vector<bool>& vis,int curr){
        vis[curr]=true;
        room_visited++;
        for(int &i: rooms[curr]){
            if(!vis[i]) dfs(rooms,vis,i);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n,false);
        dfs(rooms,vis,0);
        return room_visited==n;
    }
};
