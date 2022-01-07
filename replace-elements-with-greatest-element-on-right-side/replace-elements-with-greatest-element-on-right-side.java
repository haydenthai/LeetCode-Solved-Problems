class Solution {
    public int[] replaceElements(int[] arr) {
        if(arr.length == 1)return new int[]{-1};
        
        
        int mx = -1, n = arr.length, a;
        for (int i = n - 1; i >= 0; --i) {
            a = arr[i];
            arr[i] = mx;
            System.out.println("mx: "+ mx + ", a: "+ a);
            mx = Math.max(mx, a);
            
        }
        return arr;
        
    }
}