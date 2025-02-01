class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candy=0;
        for(int i: candies) max_candy=max(max_candy,i);
        vector<bool> ans(candies.size(),false);
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max_candy) ans[i]=true;
        }
        return ans;
    }
};
