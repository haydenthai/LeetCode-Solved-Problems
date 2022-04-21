class MyHashMap {
private:
    vector <int> hm;
    int count = 0;
public:
    MyHashMap(): hm(1e6+1, -1) {
        
    }
    
    void put(int key, int value) {
        hm[key] = value;   
    }
    
    int get(int key) {
        return hm[key];
    }
    
    void remove(int key) {
        hm[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */