class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        int prev=0;
        v.push_back(0);
        for(int i: nums){
            v.push_back(i+prev);
            prev+=i;
        }
    }
    
    int sumRange(int left, int right) {
        return v[right+1]-v[left];
    }
};
