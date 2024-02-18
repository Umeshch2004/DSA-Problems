//Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Array and Dynamic Programming

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        for(int i=0;i<prices.size();i++)
        {
            int diff = prices[i] - mini;
            profit = max(profit, diff);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};