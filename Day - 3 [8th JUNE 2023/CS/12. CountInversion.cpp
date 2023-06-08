PL: https://www.codingninjas.com/codestudio/problems/count-inversions_615?leftPanelTab=1

#include <bits/stdc++.h> 

void merge(long long int arr[], int st, int e, long long int &count)
{
    int mid = st + (e-st)/2;
    int left = st;
    int right = mid+1;
    vector<long long int> temp;

    while(left<=mid&&right<=e)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
            
        }
        else
        {
            count += (mid - left + 1);
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=e)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=st; i<=e; i++)
    {
        arr[i] = temp[i-st];
    }

}

void mergeSort(long long int arr[], int st, int e, long long int &count)
{
    if(st>=e)
    return;

    int mid = st + (e-st)/2;
    mergeSort(arr, st, mid, count);
    mergeSort(arr, mid+1, e, count);

    merge(arr,st,e,count);
    
}

long long getInversions(long long *arr, int n){
    long long int count = 0;
    mergeSort(arr,0,n-1,count);
    return count;
}
