class Solution {
public:
    bool lower(char &c){
        return c>='a' && c<='z';
    }
    bool upper(char &c){
        return c>='A' && c<='Z';
    }
    bool digit(char &c){
        return c>='0' && c<='9'; 
    }
    int strongPasswordChecker(string password) {
        int n = password.size();

        bool lo=false,up=false,di=false;

        if(n<=20){
            int replace_need=0,replace_poss=0;
            int extra=0;
            if(n<6) extra = 6-n;

            int i=0;
            while(i<n){
                if(!lo && lower(password[i])) lo=true;
                if(!up && upper(password[i])) up=true;
                if(!di && digit(password[i])) di=true;

                int cnt=1;
                int j= i+1;
                while(j<n && password[i]==password[j]){
                    j++;
                }
                cnt = j-i;
                replace_poss += cnt/3;
                i=j;
            }

            if(!lo) replace_need++;
            if(!up) replace_need++;
            if(!di) replace_need++;

            return max(extra,max(replace_need,replace_poss));
        }
        else{
            int del=n-20,replace_need=0,curr_len=0;
            priority_queue<int> pq;
            int i=0;
            while(i<n){
                if(!lo && lower(password[i])) lo=true;
                if(!up && upper(password[i])) up=true;
                if(!di && digit(password[i])) di=true;

                int cnt=1;
                int j= i+1;
                while(j<n && password[i]==password[j]){
                    j++;
                }
                cnt = j-i;
                if(cnt>=2){
                    curr_len+=2;
                    pq.push(cnt-2);
                }
                else{
                    curr_len+=cnt;
                }
                i=j;
            }
            if(!lo) replace_need++;
            if(!up) replace_need++;
            if(!di) replace_need++;

            if(curr_len>=20) return del+replace_need;

            int min_replace=0;
            int t = min(pq.top(),3);
            
            while(curr_len<20){
                //cout<<t<<" ";
                curr_len += t;
                min_replace++;
            }
            return del+max(min_replace,replace_need);
        }
        return 0;
    }
};
