class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool flag = true;
        int n = ranks.size();
        int max_rank=0;
        vector<int> rank(14,0);

        for(int i=0;i<n;i++){
            //rank[ranks[i]]++;
            max_rank = max(max_rank,++rank[ranks[i]]);
            if(i==0 || flag==false) continue;
            else{
                if(suits[i]!=suits[i-1]) flag = false;
            }
        }
        if(flag) return "Flush";
        if(max_rank>=3) return "Three of a Kind";
        if(max_rank==2) return "Pair";
        return "High Card";
    }
};
