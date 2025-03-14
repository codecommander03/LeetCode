class ParkingSystem {
public:
    vector<int> v;
    ParkingSystem(int big, int medium, int small) {
        v.push_back(-1);
        v.emplace_back(big);
        v.emplace_back(medium);
        v.emplace_back(small);
    }
    
    bool addCar(int carType) {
        if(v[carType]>=1){
            v[carType]--;
            return true;
        }
        return false;
    }
};
