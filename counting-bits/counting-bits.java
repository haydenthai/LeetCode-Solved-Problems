class Solution {
    public int[] countBits(int n) {
        int[] ans = new int[n+1];
        
        for(int i = 0; i <= n; i++){
            
            ans[i] = ans[i/2] + (i % 2);  
            System.out.println("ans: " + ans[i] + "|| ans[i>>1]: " + ans[i/2] + " || i%1: " + (i%2));
            
        }
        
        return ans;
    }
}