#include <iostream>
#include <vector>
#include "ex14.h"


int maxProfit(std::vector<int>& prices)
{
    int max_p = 0;
    int min_p = 999999;
    for (int i = 0; i < prices.size(); i++){
        min_p = std::min(min_p, prices[i]);
        max_p = std::max(max_p, prices[i]-min_p);
    }
    return max_p;
}

int task14()
{
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    std::cout << maxProfit(prices) << std::endl;
    return 0;
}
