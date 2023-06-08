//PL : https://www.codingninjas.com/codestudio/problems/699917?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    if(n<=1)
    return intervals;
    
    // First we will sort the subintervals
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> temp;
    temp.push_back(intervals[0]);
    //int last = 0;
    for(int i = 1; i<n; i++)
    {
        if(temp.back()[1]>=intervals[i][0])
        {
            //merge
            temp.back()[1] =max(intervals[i][1],temp.back()[1]);
        }
        else
        {
            //push the new vector
            temp.push_back(intervals[i]);
            //last++;
        }
    }
    return temp;
}
