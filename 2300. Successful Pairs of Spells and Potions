class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(),m = potions.size();
        sort(potions.begin(),potions.end());
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            int spell = spells[i];
            int l=0,r=m-1,mid;
            while(l<=r){
                mid = l + (r-l)/2;
                long long p = (long long)spell*(long long)potions[mid];
                if(p < success){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
            ans[i] = m-l;
        }
        return ans;

    }
};
