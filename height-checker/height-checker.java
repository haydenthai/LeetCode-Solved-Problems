class Solution {
    public int heightChecker(int[] heights) {
        int[] sorted = new int[heights.length];
        int temp;
        
        for(int i = 0; i < heights.length; i++) sorted[i] = heights[i];
        
        for(int i = 0; i < heights.length; i++){
            
            for(int j = i; j < heights.length; j++){
                
                if(sorted[i] > sorted[j]){
                    temp = sorted[i];
                    sorted[i] = sorted[j];
                    sorted[j] = temp;
                }
                    
            }
            
        }
        
        int checks = 0;
        for(int i = 0; i < heights.length; i++){
            
            
            //System.out.print(sorted[i] +", ");
            if(heights[i] != sorted[i]){
              checks++;  
            } 
            
        }
        
        return checks;
        
    }
}