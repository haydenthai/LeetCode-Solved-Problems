class Bitset {
public:
    vector <int> arr;
    int cnt, flips;
    Bitset(int size) {
        arr.resize(size, 0);
        cnt = 0, flips = 0;
    }
    
    void fix(int idx) {
        if( (arr[idx] + flips) % 2 == 0){
            arr[idx]++;
            cnt++;
        }
    }
    
    void unfix(int idx) {
        if( (arr[idx] + flips) % 2 != 0){
            arr[idx]--;
            cnt--;
        }
    }
    
    void flip() {
        cnt = arr.size()-cnt;
        flips++;
    }
    
    bool all() {
        if(cnt == arr.size()){
            return true;
        }else{
            return false;
        }
    }
    
    bool one() {
        if(cnt > 0){
            return true;
        }else{
            return false; 
        }
    }
    
    int count() {
        return cnt;
    }
    
    string toString() {
        string str;
        for(int i = 0; i < arr.size(); i++){
            if( (flips + arr[i])%2 == 0){
                str.push_back('0');
            }else{
                str.push_back('1');
            }
        }
        return str;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */