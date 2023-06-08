//PL: https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int max_sum = INT_MIN;
    long long int sum = 0;

    //Kadane's ALgo

    for(int i =0; i<n; i++)
    {
       
        sum += arr[i];
        if(sum<0) // including the empty subarray
        sum = 0;
        max_sum = max(sum, max_sum);
        
    }

    return max_sum;
}
