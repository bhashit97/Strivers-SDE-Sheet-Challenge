//Problem Link :- https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> final;
        
    final.push_back({1});
    if(n==1)
    return final;

    for(int i = 2; i<=n; i++)
    {
        vector<long long int> temp;
        temp.push_back(1);
        for(int j = 0; j<final[i-2].size()-1; j++)
        temp.push_back(final[i-2][j]+final[i-2][j+1]);

        temp.push_back(1);
        final.push_back(temp);
    }
    
    return final;
}
