class Solution {
    public int strStr(String haystack, String needle) {
        if(needle.length() == 0) return 0;
        
        if(haystack.length() == -1) return -1;
        
        
        for(int i = 0; i < haystack.length(); i++){
            
            if(i + needle.length() > haystack.length()) break;
            
            for(int j = 0; j < needle.length(); j++){
                
                if(haystack.charAt(i+j) != needle.charAt(j)) break;
                
                if(j == needle.length()-1) return i;
                
            }
            
        }
        
        return -1;
        /*
        
        if(needle.length() > 1 && haystack.length() > 1){
            
            for(int i = 0; i <= haystack.length() - needle.length(); i++){
                String temp = haystack.substring(i, i+needle.length());
                System.out.println("Temp: " + temp);
                if(temp.equals(needle)){
                    return i;
                }
            }
            
        }else if(needle.length() == 1 && haystack.length() > 1){
            char[] tempArr = needle.toCharArray();
            char[] targetArr = haystack.toCharArray();
            for(int i = 0; i < haystack.length(); i++){
                
                if(tempArr[0] == targetArr[i]){
                    return i;
                }
                
            }
        }else{
            
        }
            
        
        return -1;
        */
        
    }
}