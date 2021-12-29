class Solution {
    public int mostWordsFound(String[] sentences) {
        
        int words = 0;
        
        for(int i = 0; i < sentences.length; i++){
            char[] temp = sentences[i].toCharArray();
            int tempWords = 1;
            for(int j = 0; j < temp.length; j++){
                
                if(temp[j] == ' '){
                    tempWords++;
                }
                
            }
            
            if(tempWords > words){
                
                words = tempWords;
                
            }
            
        }
        
        return words;
        
        
    }
}