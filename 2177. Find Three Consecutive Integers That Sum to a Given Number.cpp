class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> v;
        //ll ans = num/3;
        if(num%3) return v;
        v.push_back(num/3 -1);
        v.push_back(num/3);
        v.push_back(num/3 +1);
        return v;
    }
};
