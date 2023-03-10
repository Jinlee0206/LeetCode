class ParkingSystem {
public:
    vector<int> v;
    ParkingSystem(int big, int medium, int small) {
        int total = big + medium + small;
        
        for(int i = 0 ; i< 3;i++)
        {
            v.push_back(big);
            v.push_back(medium);
            v.push_back(small);
        }
    }
    
    bool addCar(int carType) {
        if(v[carType-1])
        {
            v[carType-1]--;
            return true;
        }else return false;
    }
    
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */