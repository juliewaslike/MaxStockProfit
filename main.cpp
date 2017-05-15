//
//  main.cpp
//  MaxStockProfit
//
//  Created by Julie Wasiuk on 1/22/17.
//  Copyright © 2017 Julie Wasiuk. All rights reserved.
//

#include <iostream>
#include<vector>

using namespace std;

vector<int> stock_prices_yesterday = {30, 10, 10, 10, 10, 10, 10, 10};

int getMaxProfit()
{
    int low_index = -1;
    int high_index = stock_prices_yesterday.size()-1;
    int current_index = 0;
    
    
    int low_value = stock_prices_yesterday[0];
    int high_value = stock_prices_yesterday[high_index];
    
    while (current_index < stock_prices_yesterday.size())
    {
        if (stock_prices_yesterday[current_index] >= high_value)
        {
            high_value = stock_prices_yesterday[current_index];
            high_index = current_index;
        }
        
        if (stock_prices_yesterday[current_index] <= low_value && current_index < high_index)
        {
            low_value = stock_prices_yesterday[current_index];
            low_index = current_index;
        }
        
        current_index++;
       
    }
    
    int maxProfit = high_value - low_value;
    
    return maxProfit >0 ? maxProfit: 0;
}

int main(int argc, const char * argv[]) {

    cout << getMaxProfit() << endl;
    
}
