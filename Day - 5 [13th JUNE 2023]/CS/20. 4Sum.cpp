//PL : https://www.codingninjas.com/codestudio/problems/983605?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    //Sort the array
    sort(arr.begin(),arr.end());

    for(int i = 0; i<n; i++)
    {
        if(i>0&&arr[i]==arr[i-1])
        continue;
        for(int j = i+1; j<n; j++)
        {
            if(i!=j+1&&arr[j]==arr[j-1])
            continue;
            int k = j+1;
            int l = n-1;
            while(k<l)
            {
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if(sum==target)
                {
                    return "Yes";
                    break;
                }
                else if(sum<target)
                {
                    k++;
                    while(k<l&&arr[k]==arr[k-1]) 
                    k++;
                }
                else
                {
                    l--;
                    while(k<l&&arr[l]==arr[l+1])
                    l--;
                }
            }
        }
    }

    return "No";
}
