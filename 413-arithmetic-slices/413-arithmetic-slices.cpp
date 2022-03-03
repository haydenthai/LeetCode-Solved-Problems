class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int len = nums.size();
        if(len <= 2) return 0;
        //vector<int> dp(len, 0); //number of slices ending with nums[i]
        //if(nums[2]-nums[1] == nums[1]-nums[0])dp[2]=1; //if the first three are arithmetic or not
        int dp = 0;
        int result = 0;
        
        for(int i = 2; i < len; ++i){
            
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2] ){
                //dp[i] = dp[i-1] +1;
                dp++;
            }else{
                dp = 0;
            }
            //result += dp[i]; // add up all valid slices
            result += dp;
        }
        
        return result;
    }
};