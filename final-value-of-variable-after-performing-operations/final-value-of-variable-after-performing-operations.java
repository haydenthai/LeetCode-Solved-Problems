class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int finalInt = 0;
        //System.out.println(operations.length);
        for(int i = 0; i < operations.length;i++){
            if(operations[i].charAt(1) == '-'){
                finalInt--;
            }else{
                finalInt++;
            }
        }
        return finalInt;
    }
}