//PL : https://www.codingninjas.com/codestudio/problems/975286?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 

bool comparator(pair<int,int> p1, pair<int,int> p2)
{
    return p1.second*1.0/p1.first > p2.second*1.0/p2.first;
}

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    double res = 0.0;
    
    sort(items.begin(),items.end(), comparator);
    int curr_w = 0;
    for(int i=0; i<n; i++)
    {
        pair<int,int> stone = items[i];
        if(curr_w+stone.first<=w)
        {
            curr_w += stone.first;
            res += stone.second;
        }
        else
        {
            int remain = w - curr_w;
            res += (stone.second/double(stone.first))*double(remain);
            break;
        }
    }

    return res;

    
}
