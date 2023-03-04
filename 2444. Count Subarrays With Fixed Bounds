https://leetcode.com/problems/count-subarrays-with-fixed-bounds/

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int i=0,j=0;// i is the starting index of valid subarray, j is iterator for wholw vector
        int min_ind=-1,max_ind=-1; // latest indexes of min and max elements
        long long ans = 0;
        while(j<nums.size()){
            if(nums[j]>=minK && nums[j]<=maxK){
                if(nums[j]==minK) min_ind = j;
                if(nums[j]==maxK) max_ind = j;
                int temp = min(min_ind,max_ind) - i + 1;
                if(temp>0) ans+=temp;
            }
            else{
                i=j+1;
                min_ind = -1;
                max_ind = -1;
                i = j+1;
            }
            j++;
        }
        return ans;
    }
};
