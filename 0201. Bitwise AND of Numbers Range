class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans = 0;
        for(int i=31;i>=0;i--){
            int x = (1<<i);
            if((left&x) != (right&x)) break;
            else ans |= (left&x);
        }
        return ans;
    }
};
