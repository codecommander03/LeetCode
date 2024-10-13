class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>,greater<int>> pq;
    //priority_queue<int> pq;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int i: nums){
            add(i);
        }
    }
    
    int add(int val) {
        if (pq.size() < k) {
            pq.push(val);
        } else if (val > pq.top()) {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};
