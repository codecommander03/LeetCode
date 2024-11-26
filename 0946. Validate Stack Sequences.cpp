class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int ind = 0;
        for (int i : pushed) {
            s.push(i);
            while (!s.empty() && s.top() == popped[ind]) {
                s.pop();
                ind++;
            }
        }
        return s.empty();
    }
};
