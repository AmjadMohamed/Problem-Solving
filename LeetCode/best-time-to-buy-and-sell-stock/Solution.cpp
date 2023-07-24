// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smallestPrice = INT_MAX , profit = 0;
        for(int i = 0 ; i < prices.size() ; i ++)
        {
            if(smallestPrice > prices[i])
            {
                smallestPrice = prices[i];
            }
            if(prices[i] - smallestPrice > profit)
            {
                profit = prices[i] - smallestPrice;
            }
        }
        return profit;
    }
};