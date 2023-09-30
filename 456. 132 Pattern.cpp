class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int k = INT_MIN; // i < k < j are values 
        // we are storing the kth elment and jth element on top of stack
        stack<int> s;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<k) return true;
            while(!s.empty() && nums[i] > s.top()){
                k = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};
