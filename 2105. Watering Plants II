class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int a=capacityA,b=capacityB,i=0,j=n-1;
        int cnt1=0,cnt2=0;
        while(i<j){
            if(a<plants[i]) cnt1++,a = capacityA;
            if(b<plants[j]) cnt2++,b = capacityB;
            a -= plants[i++];
            b -= plants[j--];
        }
        if(i==j){
            if(a==b){
                if(a<plants[i]) cnt1++;
            }
            else{
                int x = max(a,b);
                if(x<plants[i]) cnt1++;
            }
        }
        return cnt1+cnt2;
    }
};
