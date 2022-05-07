class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> res(n);
        vector <int> leftProduct(n);
        vector <int> rightProduct(n);
        
        leftProduct[0] = 1;
        for(int i = 1; i <n; i++){
            leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
        }
        
        rightProduct[n-1] = 1;
        for(int j = n-2; j >= 0; j--){
            rightProduct[j] = rightProduct[j+1] * nums[j+1];
        }
        
        for(int k = 0; k < n; k++){
            res[k] = leftProduct[k] * rightProduct[k];
        }
        
        return res;
    }
};