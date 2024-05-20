class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> v = nums;

        int n = nums.size();

        sort(v.begin(),v.end());

        int i=0,j=(n+1)/2;

        for(int k=n-1;k>=0;k--){
            
            if(k%2) nums[k] = v[j++];
            else nums[k] = v[i++];
        }
    }
};
