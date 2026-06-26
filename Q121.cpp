#include<iostream>
#include<vector>
using namespace std ;
int MaxProfit(vector<int>&price){             //Best time to buy or sell stocks
    int maxProfit = 0, bestBuy = price[0];
    int n= price.size();

    for(int i=1; i<n; i++){
        if(price[i]>bestBuy){
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy,price[i]);
    }
    return maxProfit;
}

int main() {
    vector<int>prices = {7,1,5,3,6,4};
    cout<<MaxProfit(prices);

    return 0;
}