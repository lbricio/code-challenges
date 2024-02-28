class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int lower_value = prices[0];

        for (const auto &price : prices) {
            if (price < lower_value)
                lower_value = price;
            else if (price - lower_value > max_profit) {
                max_profit = price - lower_value;
            }

        }
        return max_profit;
    }
};
