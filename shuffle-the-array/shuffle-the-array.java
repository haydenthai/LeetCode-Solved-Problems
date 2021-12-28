class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] shuffled = new int[nums.length];
        
        for(int i = 0, j = n, index = 0;index<2*n; i++, j++){
            shuffled[index++] = nums[i];
            shuffled[index++] = nums[j];
        }
        
        return shuffled;
        
        
    }
}