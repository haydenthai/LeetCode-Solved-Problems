class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] sorted = new int[nums.length];
        int i = 0;
        int j = nums.length-1;
        
        for(int k = nums.length-1; k >=0; k--){
            
            if(Math.abs(nums[i]) > Math.abs(nums[j])){
                
                sorted[k] = nums[i] * nums[i];
                i++;
                
            }else{
                sorted[k] = nums[j] * nums[j];
                j--;
            }
            
            
        }
        
        return sorted;
    }
}