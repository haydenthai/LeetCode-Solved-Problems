class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        int first = 0, second = 1, temp;
        for(int i = 0; i < n-2; i++){
            temp = second;
            second = first + second;
            first = temp;
            //cout << "temp:" << temp << ", x: " << x << ", y: " << y << "\n";
        }
        return first + second;
        
    }
};