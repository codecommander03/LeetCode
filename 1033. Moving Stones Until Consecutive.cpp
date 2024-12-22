class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> v = {a,b,c};
        sort(v.begin(),v.end());
        if(v[2]-v[0]==2) return {0,0};

        int mini=0;
        int maxi = 0;
        
        int x = v[1]-v[0];
        int y = v[2]-v[1];

        maxi = max(maxi,x+y-2);

        if(min(x,y)<=2) mini=1;
        else mini = 2;

        return {mini,maxi};
    }
};
