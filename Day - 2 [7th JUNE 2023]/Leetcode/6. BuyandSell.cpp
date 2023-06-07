//PL : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& a)
    {
        //keeping the track of previous
        int mini = 0; //index
        int maxP = 0; //index
        int n = a.size();
        for(int i = 0; i<n; i++)
        {
            int profit = a[i] - a[mini];
            maxP = max(profit, maxP);

            if(a[mini]>a[i])
            mini = i;
        }
        return maxP; 
    }
};
