class Solution {
public:
    int climbStairs(int n) {
        
        
        if(n <= 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
            
        int one  = 1;
        int two = 2;
        int steps = 0;
        
        for(int i = 2; i <n;i++){
            steps = one + two;
            one = two;
            two = steps;
        }
        
        return steps;
    }
};