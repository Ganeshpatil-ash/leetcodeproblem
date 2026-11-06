class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit1 = 0;
        for (int i = 0; i < prices.size(); i++){
            if (prices[i] < minprice ){
                minprice = prices[i];
            }
            else{
                int profit = prices[i] - minprice;
                maxprofit1 = max(maxprofit1,profit);
            }
        }      
        return maxprofit1;
    }
};