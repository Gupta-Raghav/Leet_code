class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int arr[n];
        int msf = prices[n-1];
        int max_profit = 0;
        
        for(int i=n-1;i>=0;i--){
            msf = max(prices[i],msf);
            arr[i]=msf-prices[i];
            max_profit = max(max_profit,arr[i]);
        }
        return max_profit;
    }
};