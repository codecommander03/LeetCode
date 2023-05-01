class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        int n = nums.size();
        int cnt=0;
        int x;
        while(j<n){
            x = nums[j];
            
            while(j<n && nums[j]==x){
                j++;
                cnt++;
            }
            if(cnt>2) cnt = 2;
            while(cnt--){
                nums[i] = x;
                i++;
            }
            cnt = 0;
        }
        // if(cnt){
        //     if(cnt>2) cnt = 2;
        //     for(int k=i;k<i+cnt;i++){
        //         nums[i] = x;
        //         i++;
        //     }
        // }
        return i;
    }
};
