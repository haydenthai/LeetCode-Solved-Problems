class Solution {
public:
    
    
    
    string getSmallestString(int n, int k) {
        //fill the string with n a's
        string res(n, 'a');
        k -= n;
        
        
        //traverse the string starting from the end
        int i = n;

        while(k > 0){
            res[--n] += min(25, k);
            k -= min(25, k);
        }
        
        
//         while(i < n){
            
//             //if k is less than z
//             if(k > 'z' - 'a'){
//                 res << 'z';
//                 k -= 27;
//             }else{
                
//             }
            
//             i++;
//         }
        
        
        //reverse the string
        
        
        
        return res;
    }
};