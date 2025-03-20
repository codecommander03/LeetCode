class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int,greater<int>> s;

        for(int i: nums){
            if(i%2){
                i*=2;
            }
            s.insert(i);  // we will not insert biggest odd factor, because we will not be able to undo the factors of 2
        }

        int ans = *s.begin() - *s.rbegin();

        while(*s.begin() % 2==0){
            int x = *s.begin();
            s.erase(x);

            x/=2;
            s.insert(x);

            ans = min(ans,*s.begin()-*s.rbegin());
        }
        return ans;
    }
};
