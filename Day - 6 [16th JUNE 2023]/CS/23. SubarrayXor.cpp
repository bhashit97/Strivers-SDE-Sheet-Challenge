//PL : https://www.codingninjas.com/codestudio/problems/1115652?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //prefix xor
    int sub = 0;
    int n = arr.size();

    map<int,int> mpp;
    int xorsum = 0;
    mpp[xorsum]++;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
        int rem = x^xorsum;
        sub += mpp[rem];
        mpp[xorsum]++;
    
    }
    return sub;
}
