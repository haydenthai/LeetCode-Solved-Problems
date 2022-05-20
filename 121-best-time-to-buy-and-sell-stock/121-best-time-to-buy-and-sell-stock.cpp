class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int lowestPrice = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1]){
                profit = max(profit, prices[i] - lowestPrice);    
            }else{
                lowestPrice = min(lowestPrice, prices[i]);    
            }
            
            
        }
        return profit;
    }
};