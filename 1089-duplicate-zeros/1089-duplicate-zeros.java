class Solution {
    public void duplicateZeros(int[] arr) {
        int[] soln = new int[arr.length];
        
        for(int i = 0; i < arr.length; i++){
            soln[i] = arr[i];
        }
        int index = 0;
        for(int i = 0; i < arr.length || index < arr.length; i++, index++){
            
            if(index >= arr.length) continue;
            
            if(soln[i] == 0){
                arr[index++] = 0;
                if(index >= arr.length) continue;
                arr[index] = 0;
                
            }else{
                arr[index] = soln[i];
            }
            
        }
        
    }
}