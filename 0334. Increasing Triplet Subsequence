class Solution {
public:
    bool increasingTriplet(vector<int>& n)
    {
        int l = INT_MAX,r = INT_MAX;

        for (int &it: n){
            if (it <= l) l = it;
            else if (it <= r) r = it;
            else return true;
        }
        return false;
    }
};
