class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int left = 0, right = nums.length-1;
        int[] newArr = new int[nums.length];
        
        for(int i = 0; i < nums.length || left == right; i++){
            
            if(nums[i] % 2 == 0){
                newArr[left++] = nums[i];
            }else{
                newArr[right--] = nums[i];
            }
            
        }
        return newArr;
    }
}