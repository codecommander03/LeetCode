class MyCircularDeque {
public:
    vector<int> v;
    int maxsize;
    MyCircularDeque(int k) {
        maxsize = k;
    }
    
    bool insertFront(int value) {
        if(v.size()==maxsize) return false;
        else{
            v.insert(v.begin(),value);
            return true;
        }
    }
    
    bool insertLast(int value) {
        if(v.size()==maxsize) return false;
        else{
            v.push_back(value);
            return true;
        }
    }
    
    bool deleteFront() {
        if(v.empty()) return false;
        v.erase(v.begin());
        return true;
    }
    
    bool deleteLast() {
        if(v.empty()) return false;
        v.pop_back();
        return true;
    }
    
    int getFront() {
        if(v.empty()) return -1;
        return v[0];
    }
    
    int getRear() {
        if(v.empty()) return -1;
        return *(v.end()-1);
    }
    
    bool isEmpty() {
        return v.empty();
    }
    
    bool isFull() {
        return v.size() == maxsize;
    }
};
