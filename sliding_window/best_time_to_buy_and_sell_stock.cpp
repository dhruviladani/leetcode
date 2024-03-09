class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp = prices[0];
        int profit=0;
        
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i] < prices[i+1]){
                temp = min(temp, prices[i]);
                profit = max(profit, (prices[i+1] - temp));
            }
        }
        
        return profit;
    }
};
