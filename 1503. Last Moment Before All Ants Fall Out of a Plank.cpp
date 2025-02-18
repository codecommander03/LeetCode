class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int rightmost_going_left = 0,leftmost_going_right = n;
        for(int &i: left) rightmost_going_left=max(rightmost_going_left,i);
        for(int &i: right) leftmost_going_right=min(leftmost_going_right,i);
        return max(rightmost_going_left, n-leftmost_going_right);
    }
};
