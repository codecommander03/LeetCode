class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1,v2;
        long long num=0;
        for(char c: version1){
            if(c=='.'){
                v1.emplace_back(num);
                num=0;
            }
            else{
                num = num*10 + (c-'0');
            }
        }
        v1.emplace_back(num);
        num = 0;
        for(char c: version2){
            if(c=='.'){
                v2.emplace_back(num);
                num=0;
            }
            else{
                num = num*10 + (c-'0');
            }
        }
        v2.emplace_back(num);

        while(v1.size() < v2.size()){
            v1.push_back(0);
        }
        while(v1.size()>v2.size()){
            v2.push_back(0);
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]>v2[i]) return 1;
            if(v1[i]<v2[i]) return -1;
        }
        return 0;
    }
};
