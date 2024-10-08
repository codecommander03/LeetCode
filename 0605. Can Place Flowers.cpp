class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int N=flowerbed.size();
        bool flag=true;
        int count = 0;
        if(N==1){
            if(flowerbed[0]==1) return n==0;
            else return n<=1;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            count++;
        }
        for(int i=1;i<N-1;i++){
            if(flowerbed[i]==1){
                if(flowerbed[i-1]==1 || flowerbed[i+1]==1){
                    flag = false;
                    break;
                }
            }
            else{
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        if(flowerbed[N-1]==0 && flowerbed[N-2]==0){
            flowerbed[N-1]=1;
            count++;
        }

        return count>=n;
    }
};
