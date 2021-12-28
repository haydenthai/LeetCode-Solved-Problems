class Solution {
    public int maximumWealth(int[][] accounts) {
        int soln = 0;
        
        System.out.println(accounts[0].length);
        System.out.println(accounts.length);
        
        for(int i = 0; i < accounts.length; i++){
            int temp = 0;
            for(int j = 0; j < accounts[0].length; j++){
                
                temp += accounts[i][j];
                
            }
            if(temp > soln){
                soln = temp;
            }
            
        }
        
        return soln;
    }
}