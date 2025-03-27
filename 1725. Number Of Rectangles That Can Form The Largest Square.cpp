class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLen = 0,ans = 0;
        for(auto v: rectangles){
            if(min(v[0],v[1])>maxLen){
                ans = 1;
                maxLen = min(v[1],v[0]);
            }
            else if(min(v[0],v[1])==maxLen){
                ans++;
            }
        }
        return ans;
    }
};
