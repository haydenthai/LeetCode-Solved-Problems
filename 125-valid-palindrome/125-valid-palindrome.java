class Solution {
    public boolean isPalindrome(String s) {
        
        //s.replaceAll("\\s+","");
        s = s.toLowerCase();
        s= s.replaceAll("[^a-zA-Z0-9]", "");
        int len = s.length();
        //System.out.print(s.replaceAll("\\s", "") + " ");
        for(int i = 0; i < len/2; i++){
            System.out.print(s.charAt(i) + " ");
            if(s.charAt(i) != s.charAt(len-1-i)){
                return false;
            }
        }
        
        return true;
    }
}