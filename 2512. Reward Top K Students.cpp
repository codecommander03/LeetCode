class Solution {
public:
    static bool comparator(pair<int,int> &a,pair<int,int> &b){
        if(a.first==b.first) return a.second<b.second;
        return a.first > b.first;
    }
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        int n= report.size();
        
        unordered_map<string,int> pos;
        unordered_map<string,int> neg;

        for(string s: positive_feedback){
            pos[s]=1;
        }
        for(string s: negative_feedback){
            neg[s]=1;
        }
        vector<pair<int,int>> pq;

        for(int i=0;i<n;i++){
            int l=0,r=0,score=0;
            string s = report[i];

            while(r<s.size()){
                if(s[r]==' '){
                    string tmp = s.substr(l,r-l);
                    if(pos[tmp]==1) score+=3;
                    else if(neg[tmp]==1) score-=1;
                    l=r+1;
                }
                r++;
            }

            string tmp=s.substr(l,r-l);
            if(pos[tmp]==1) score+=3;
            else if(neg[tmp]==1) score-=1;
            pq.push_back({score,student_id[i]});
        }
        //////////////////////////////////////
        vector<int> ans;
        sort(begin(pq),end(pq),comparator);
        for(int i=0;i<pq.size(),k>0;i++,k--){
            ans.push_back(pq[i].second);
        }
        ///////////////////////////////////////////
        return ans;
    }
};
