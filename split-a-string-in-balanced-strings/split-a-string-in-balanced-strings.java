class Solution {
    public int balancedStringSplit(String s) {
        int balanced = 0, flipped = 0;
        
        for(int i =0 ; i < s.length() ; i++){
            
            balanced += s.charAt(i) == 'L' ? 1:-1;
            if(balanced == 0){
                flipped++;
            }
            
            
        }
        
        return flipped;
    }
}