class Solution {
public:
    int tribonacci(int n) {
        if(n == 0)return 0;
        if(n < 3) return 1;
        int one = 0, two = 1, three = 1;
        for(int i = 0; i < n-2; i++){
            int temp = three, temp2 = two;

            three = two + one + three;
            two = temp;
            one = temp2;
            
            
        }
        return three;
    }
};