class Solution {
    public int subtractProductAndSum(int n) {
        String num = Integer.toString(n);
        int sum = 0;
        int product = 1;
        //System.out.println(num.charAt(0));
        for(int i = 0; i < num.length();i++){
                    
            product *= num.charAt(i) - 48;
            sum += num.charAt(i) - 48;
            
        }    
    
        //System.out.println(temp);
        return product-sum;
    }
}