class ProductOfNumbers {
public:
    vector<int> v;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int n = v.size(),ans = 1;
        for(int i=n-1;i>=n-k;i--){
            ans *= v[i];
        }
        return ans;
    }
};
