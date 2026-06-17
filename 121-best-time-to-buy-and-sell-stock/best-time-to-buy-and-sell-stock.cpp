class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0];
        int ans = 0;

        if (prices.empty()) return 0;

        for ( int i = 1 ; i < prices.size() ; i ++){
            bestBuy = min(bestBuy , prices[i]);
            if (bestBuy < prices[i]) {
                ans = max(prices[i] - bestBuy, ans);
            }
        }
        return ans;
    }
};