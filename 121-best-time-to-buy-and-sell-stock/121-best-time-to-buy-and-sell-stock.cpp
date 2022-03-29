class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int arr[n];
        int msf = prices[n-1];
        int max_profit = 0;
        
        for(int i=n-1;i>=0;i--){
            if(msf<prices[i]){
                msf = prices[i];
            }
            if(msf-prices[i]>0)
                arr[i]=msf-prices[i];
            if(msf-prices[i]==0){
                arr[i]=0;
            }
            if(max_profit < arr[i])
                max_profit = arr[i];
        }
        return max_profit;
    }
};