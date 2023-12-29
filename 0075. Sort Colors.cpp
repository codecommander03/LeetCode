class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v(3,0);
        for(int i: nums) v[i]++;
        int index=0;
        for(int &i: nums){
            while(v[index]<=0) index++;
            i = index;
            v[index]--;
        }
    }
};
