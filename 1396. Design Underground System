class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> in;
    unordered_map<string,pair<int,int>> time;
    UndergroundSystem() { 
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id] = {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = in[id];
        in.erase(id);

        string s = checkIn.first + "->" + stationName;
        int takentime = t - checkIn.second;

        time[s].first += takentime;
        time[s].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s = startStation + "->" + endStation;

        auto it = time[s];
        return (double) it.first/it.second;
    }
};
