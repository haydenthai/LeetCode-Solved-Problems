class Solution {
public:
    int fib(int n) {
        if(n<2)return n;
        int one = 0, two = 1, res = one+two;
        for(int i = 2; i < n; i++){
            one = two;
            two = res;
            res = one + two;
        }
        return res;
    }
};