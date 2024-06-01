class Twitter {
public:
    vector<pair<int,int>> m;
    unordered_map<int,unordered_map<int,int>> f;
    Twitter() {}
    
    void postTweet(int userId, int tweetId) {
        m.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        int cnt = 0;
        for(int i = m.size()-1;i>=0 && cnt<10;i--){
            if(m[i].first==userId||f[userId][m[i].first]) res.push_back(m[i].second),cnt++;
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        f[followerId][followeeId] = 1;
    }
    
    void unfollow(int followerId, int followeeId) {
        f[followerId][followeeId] = 0;
    }
};
