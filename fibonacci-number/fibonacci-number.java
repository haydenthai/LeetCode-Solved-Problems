class Solution {
    public int fib(int n) {
        if(n==0)return 0;
        
        int one = 0;
        int two = 1;
        for(int i = 1; i < n; i++){
            
            int temp = two;
            two += one;
            one = temp;
            
        }
            
            
        
        return two;
    }
}