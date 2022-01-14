class Solution {
    public List<String> fizzBuzz(int n) {
        List <String> res = new ArrayList<String>();
        String temp;
        //res.add("test");
        Integer i;
        for(i = 1; i <= n; i++){
            
            // res.add(i.toString());
            
            if(i%3 == 0 && i%5 == 0 && i >= 5){
                res.add("FizzBuzz");
            }else if( i % 3 == 0 && i >= 3){
                res.add("Fizz");
            }else if( i % 5 == 0 && i >= 5){
                res.add("Buzz");
            }else{
                res.add(i.toString());
            }
            
        }
        return res;
    }
}