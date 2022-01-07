class Solution {
    public void moveZeroes(int[] nums) {
        int point1 = 0, temp;
        
        for(int i = 0; i < nums.length; i++){
            
            if(nums[i] != 0){
                
                temp = nums[point1];
                nums[point1++] = nums[i];
                nums[i] = temp;    
                
            }
            
        }
    }
}