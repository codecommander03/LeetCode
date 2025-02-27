https://leetcode.com/problems/kth-missing-positive-number/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int miss=0;
        if(arr[0]!=1){
            int temp = arr[0]-1;
            if(temp>=k) return k;
            else miss+=temp;
        }
        for(int i=1;i<arr.size();i++){
            int temp = arr[i]-arr[i-1]-1;
            if(miss+temp>=k){
                return arr[i-1] + (k-miss);
            }
            else miss+=temp;
        }
        return *arr.rbegin() + (k-miss);
    }
};
