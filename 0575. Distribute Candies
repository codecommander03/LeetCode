class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> m;
        for(int i: candyType) m[i]=1;
        return min(m.size(),candyType.size()/2);
    }
};
