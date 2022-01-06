class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int index1 = m - 1, index2 = n - 1, done = m + n - 1;
        
        while(index1 >= 0 && index2 >= 0){
            nums1[done--] = nums1[index1] > nums2[index2] ? nums1[index1--] : nums2[index2--];
        }
        
        while(index2 >= 0){
            nums1[done--] = nums2[index2--];
        }
    }
}