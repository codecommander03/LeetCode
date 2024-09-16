class MyCircularQueue {
public:
    vector<int> v;
    int maxsize;
    MyCircularQueue(int k) {
        v.clear();
        maxsize = k;
    }
    
    bool enQueue(int value) {
        if(v.size()<maxsize){
            v.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(v.empty()) return false;
        v.erase(v.begin());
        return true;
    }
    
    int Front() {
        if(v.empty()) return -1;
        return v[0];
    }
    
    int Rear() {
        if(v.empty()) return -1;
        return *(v.end()-1);
    }
    
    bool isEmpty() {
        return v.empty();
    }
    
    bool isFull() {
        return v.size()==maxsize;
    }
};
