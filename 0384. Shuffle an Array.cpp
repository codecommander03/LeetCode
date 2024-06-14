class Solution {
public:
    vector<int> org,temp;
    Solution(vector<int>& nums) {
        org = nums;
        temp = nums;
    }
    
    vector<int> reset() {
        return org;
    }
    
    vector<int> shuffle() {
        vector<int> res;
        while(!temp.empty()){
            int x = rand()%temp.size();
            res.push_back(temp[x]);
            temp.erase(temp.begin()+x);
        }
        temp = org;
        return res;
    }
};
