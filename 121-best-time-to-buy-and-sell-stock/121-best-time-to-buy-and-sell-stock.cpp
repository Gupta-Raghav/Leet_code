class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int msf = 0;
        int max_profit = 0;
        
        for(int i= prices.size()-1;i>=0;i--){
            msf = max(prices[i],msf);
            max_profit = max(max_profit,msf-prices[i]);
        }
        return max_profit;
    }
};