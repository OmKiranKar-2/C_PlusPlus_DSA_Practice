// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> prices = {7,2,1,5,3,6,4}; // Max Profit: 5, buy on 2nd day, sell on 5th day
    int profit = 0;

    // Optimized Approach -> TC: O(n)
    int bestBuy=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        profit = std::max(profit,prices[i]-bestBuy);
        bestBuy = std::min(bestBuy,prices[i]);
    }

    // // Brute Force Approach -> TC: O(n^2)
    // for(int i=0;i<prices.size();i++)
    // {
    //     for(int j=i+1;j<prices.size();j++)
    //     {
    //         if(prices[j]>prices[i])
    //         {
    //             profit = std::max(profit,prices[j]-prices[i]);
    //         }
    //     }
    // }
    std::cout<<profit;
    return 0;
}