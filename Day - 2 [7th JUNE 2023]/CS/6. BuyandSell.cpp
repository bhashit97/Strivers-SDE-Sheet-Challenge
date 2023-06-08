//PL : https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    //find the minimum beforehand and compare it today' price
    long long int before = prices[0];
    long long int max_profit = INT_MIN;
    int n = prices.size();
    for(int i=0; i<n; i++)
    {
        long long int diff = prices[i] - before;
        max_profit = max(diff, max_profit);
        if(before>prices[i])
        before = prices[i];
    } 
    return max_profit;
}
