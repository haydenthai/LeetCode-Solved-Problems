class Solution {
    public String defangIPaddr(String address) {
        StringBuilder defanged = new StringBuilder();
        
        for(int i = 0; i < address.length(); i++){
            
            if(address.charAt(i) == '.'){
                defanged.append('[');
                defanged.append('.');
                defanged.append(']');
            }else{
                defanged.append(address.charAt(i));
            }
            
        }
        
        return defanged.toString();
    }
}