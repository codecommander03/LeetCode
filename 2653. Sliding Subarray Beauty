class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        map<int,int> m;
        vector<int> ans;
        int n= nums.size();
        for(int i=0;i<k;i++) m[nums[i]]++;
        int cnt=x;
        for(auto i: m){
            if(cnt<=i.second){
                (i.first<0) ? ans.push_back(i.first) : ans.push_back(0);
                break;
            }
            else cnt-=i.second;
        }
        for(int i=k;i<n;i++){
            m[nums[i]]++;
            m[nums[i-k]]--;
            cnt = x;
            for(auto i: m){
                if(cnt<=i.second){
                    (i.first<0) ? ans.push_back(i.first) : ans.push_back(0);
                    break;
                }
                else cnt-=i.second;
            }
        }
        return ans;
    }
};
