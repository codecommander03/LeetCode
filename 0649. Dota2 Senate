class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> qd,qr;
        for(int i=0;i<n;i++){
            if(senate[i]=='R') qr.push(i);
            else qd.push(i);
        }
        while(!qr.empty() && !qd.empty()){
            int r = qr.front(),d = qd.front();
            qd.pop();
            qr.pop();

            if(r < d){
                qr.push(r + n);
            }
            else qd.push(d + n);
        }
        if(qr.size()>= qd.size()) return "Radiant";
        return "Dire";
    }
};
