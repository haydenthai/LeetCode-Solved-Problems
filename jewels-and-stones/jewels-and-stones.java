class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int total = 0;
        
        for(int i = 0; i < jewels.length(); i++){
            
            char temp = jewels.charAt(i);
            
            for(int j = 0; j < stones.length(); j++){
                
                if(temp == stones.charAt(j)){
                    total++;
                }
                
            }
            
        }
        
        return total;
        
    }
}