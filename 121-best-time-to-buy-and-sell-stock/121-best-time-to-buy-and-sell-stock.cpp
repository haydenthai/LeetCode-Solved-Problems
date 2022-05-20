class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int lowestPrice = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            lowestPrice = min(lowestPrice, prices[i]);
            profit = max(profit, prices[i] - lowestPrice);
        }
        return profit;
    }
};