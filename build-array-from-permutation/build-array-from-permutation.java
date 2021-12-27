class Solution {
    public int[] buildArray(int[] nums) {
        int[] soln = new int[nums.length];
        
        for(int i = 0; i < nums.length; i++){
            soln[i] = nums[nums[i]];
        }
        
        
        return soln;
    }
}