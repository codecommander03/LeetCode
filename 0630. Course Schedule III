class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(begin(courses),end(courses),[](const vector<int> &a,const vector<int> &b){
            return a[1] < b[1];
        });
        int sum = 0;
        priority_queue<int> pq;
        for(auto i: courses){
            sum += i[0];
            pq.push(i[0]);
            if(sum > i[1]){
                sum -= pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};
