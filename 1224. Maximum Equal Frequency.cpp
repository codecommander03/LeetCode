class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        map<int,int> freq,freq_of_freq;
        int n = nums.size();
        int ans=0,max_freq=0;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            const int &f = freq[nums[i]];
            
            freq_of_freq[f-1]--;
            freq_of_freq[f]++;
            max_freq=max(max_freq,f);

            if(max_freq==1 || max_freq*freq_of_freq[max_freq]==i || (max_freq-1)+(max_freq-1)*freq_of_freq[max_freq-1]==i ) ans=i+1;
        }
        return ans;
    }  
};
