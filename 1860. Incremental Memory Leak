class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        
        int time = 0;
        while(++time){
            if(memory1>=memory2 ){
                if(memory1>=time)   memory1 -= time;
                else break;
            }
            else if(memory1 < memory2 && memory2>=time){
                memory2 -= time;
            }
            else{
                break;
            }
        }
        return {time,memory1,memory2};
    }
};
