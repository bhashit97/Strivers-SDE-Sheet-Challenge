//PL : https://www.codingninjas.com/codestudio/problems/920321?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr)
{
    int longest = 0;
    int n = arr.size();
    if(n==1)
    {
        if(arr[0]==0)
        return 1;
        else
        return 0;
    }
    int sum = 0;
    unordered_map<int, int> mpp; // prefix-->index
    for(int i =0; i<n; i++)
    {
        sum += arr[i];
        if(sum==0)
        {
            longest = i+1;
        }
        else
        {
            int rem = sum;
            if(i!=0&&mpp.find(rem)!=mpp.end())
            {
                longest = max(longest, i-mpp[rem]);
            }
        }
        if(mpp.find(sum)==mpp.end()||i==0)
        {
            mpp[sum] = i;
        }
    }
    return longest;


}
