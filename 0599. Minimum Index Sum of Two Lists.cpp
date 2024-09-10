class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> m1,m2;
        for(int i=0;i<list1.size();i++){
            if(!m1.count(list1[i])) m1[list1[i]] = i;
        }
        for(int i=0;i<list2.size();i++){
            if(!m2.count(list2[i])) m2[list2[i]] = i;
        }

        vector<string> res;
        int sum=1e9;
        for(auto &[s,ind]: m1){
            if(m2.count(s) ){
                int temp = ind + m2[s];

                if(temp<=sum){
                    if(temp<sum){
                        sum = temp;
                        res.clear();
                    }
                    res.emplace_back(s);
                }
            }
        }
        return res;
    }
};
