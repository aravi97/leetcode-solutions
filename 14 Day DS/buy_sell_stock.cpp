//
//  buy_sell_stock.cpp
//  Leetcode Solutions
//
//  Created by Aditya Ravichandran on 23/07/22.
//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curBuy = 0;
        int curSell = 0;
        int profit = 0;
        int maxProfit = 0;
        while(curSell < prices.size()){
            
            if(prices[curSell] < prices[curBuy]){
                curBuy = curSell;
                continue;
            }
            
            profit = prices[curSell] - prices[curBuy];
            
            if(profit > maxProfit)
                maxProfit = profit;
            ++curSell;
        }
        return maxProfit;
    }
};
