class Solution {
    public int[] runningSum(int[] nums) {
        int runningTot = 0;
        int[] runningTots = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            
            runningTot += nums[i];
            runningTots[i] = runningTot;
            
        }
        return runningTots;
    }
}