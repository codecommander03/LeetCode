class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> v;
        int fac = 1;
        for(int i=1;i<=n;i++){
            v.emplace_back(i);
            fac *= i;
        }
        fac /= n;
        k--;
        string ans = "";

        while(v.size()){
            ans = ans + to_string(v[k/fac]);
            v.erase(v.begin() + k/fac);

            k %= fac;
            if(v.size()) fac /= v.size();
        }
        return ans;
    }
};
