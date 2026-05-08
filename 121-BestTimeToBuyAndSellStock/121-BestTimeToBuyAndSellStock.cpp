// Last updated: 08/05/2026, 10:47:05
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int profit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy_price) {
                buy_price = prices[i];
            } else {
                int current_profit = prices[i] - buy_price;
                profit = std::max(profit, current_profit);
            }
        }
        
        return profit;
    }
};
