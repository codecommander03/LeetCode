class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2) return true;
        int y = coordinates[1][1]-coordinates[0][1];
        int x = coordinates[1][0]-coordinates[0][0];
        for(int i=2;i<coordinates.size();i++){
            //if(coordinates[i][1]-coordinates[i-1][1])*(coordinates[i-1][0]-coordinates[i-2][0]) != (coordinates[i-1][1]-coordinates[i-2][1])*(coordinates[i][0]-coordinates[i-1][0]) return false;
            int &x1=coordinates[i][0],&y1=coordinates[i][1];
            int &x2=coordinates[i-1][0],&y2=coordinates[i-1][1];
            int &x3=coordinates[i-2][0],&y3=coordinates[i-2][1];
            if((y1-y2)*(x2-x3) != (y2-y3)*(x1-x2)) return false;
            //if((coordinates[i][1]-coordinates[0][1])*x != y*(coordinates[i][0]-coordinates[0][0])) return false;
        }
        return true;
    }
};
