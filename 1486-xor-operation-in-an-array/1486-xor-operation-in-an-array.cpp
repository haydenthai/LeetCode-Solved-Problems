class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int res = start;
        
        for(int i = 1; i < n; i++){
            int temp = start + 2 * i; 
            res = res ^ temp;
            
            //cout << nums[i];
        }
        
    return res;
    }
};