#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int buySellStocks1(vector<int> prices){
    int min_price = prices[0];
    int max_profit = 0;
    int n = prices.size();
    for(int i = 1;i<n;i++){
        min_price=min(min_price,prices[i]);
        max_profit = max(max_profit,prices[i]-min_price);
    }
    return max_profit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int ans = buySellStocks1(prices);
    cout << ans;
    return 0;
}