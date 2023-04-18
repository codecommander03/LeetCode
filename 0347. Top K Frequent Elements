class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i: nums) m[i]++;
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(auto i: m){
            pq.push({i.second,i.first});
        }
        while(k--){
            ans.emplace_back(pq.top().second);
            pq.pop();
        }
        return ans;

    }
};
