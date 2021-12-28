class Solution {
    public int numIdenticalPairs(int[] nums) {
        HashMap <Integer, Integer> hm = new HashMap<>();
        
        int ans = 0;
        
        for(int i : nums){
            
            int temp = hm.getOrDefault(i, 0);
            ans += temp;
            hm.put(i, temp+1);
            
        }
        
        return ans;
    }
}