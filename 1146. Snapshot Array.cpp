class SnapshotArray {
public:
    int s_id = 0;
    vector< map<int,int,greater<int>> > v;

    SnapshotArray(int length) {
        v.resize(length);
    }
    
    void set(int index, int val) {
        v[index][s_id] = val;
    }
    
    int snap() {
        s_id++;
        return s_id-1;
    }
    
    int get(int index, int snap_id) {
        auto i=v[index].lower_bound(snap_id);
        return i->second;
    }
};
