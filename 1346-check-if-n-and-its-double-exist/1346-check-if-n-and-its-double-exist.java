class Solution {
    public boolean checkIfExist(int[] arr) {
        int n, m;
        
        for(int i = 0; i < arr.length; i++){
            m = arr[i];
            for(int j = 0; j < arr.length; j++){
                n = 2 * arr[j];
                //boolean a = n==m;
                //System.out.println(n +"=="+m +": " + a);
                if(n == m && i != j){
                    
                    return true;
                    
                }
                
            }
            
        }
        
        return false;
    }
}