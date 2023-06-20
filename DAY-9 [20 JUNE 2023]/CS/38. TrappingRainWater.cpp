//PL : https://www.codingninjas.com/codestudio/problems/630519?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    if(n==0||n==1)
    return 0;

    long int left_max[n];
    long int right_max[n];
    
    long long int ans = 0;

    //left_max;
    left_max[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        left_max[i] = max(left_max[i-1],arr[i]);
    }
    
    //right_max
    right_max[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        right_max[i] = max(right_max[i+1],arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        int minw = min(left_max[i],right_max[i]) - arr[i];
        ans += minw;
    }

    return ans;
}
