//PL: https://www.codingninjas.com/codestudio/problems/1112652?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h> 

void merge(vector<int> &arr, int st, int end)
{
	int mid = (st+end)/2;
	int left = st;
	int right = mid+1;

	vector<int> temp;

	while(left<=mid&&right<=end)
	{
		if(arr[left]<arr[right])
		{
			temp.push_back(arr[left]);
			left++;
		}
		else
		{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid)
	{
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=end)
	{
		temp.push_back(arr[right]);
		right++;
	}

	for(int i=st; i<=end; i++)
	{
		arr[i] = temp[i-st];
	}
}

int solve(vector<int> &arr, int st, int mid, int end)
{

	int right = mid+1;
	
	int count = 0;
	for(int i=st; i<=mid; i++)
	{
		while(right<=end && arr[i]>2*arr[right])
		right++;
		
		count+= (right - (mid+1));

	}
	
	return count;
}

int mergeSort(vector<int> &arr, int st, int end)
{
	int cnt = 0;
	if(st>=end)
	return cnt;
	int mid = st + (end-st)/2;
	cnt += mergeSort(arr, st, mid);
	cnt += mergeSort(arr, mid+1, end);
	cnt += solve(arr, st, mid, end);
	merge(arr,st, end);
	return cnt;  
}
int reversePairs(vector<int> &arr, int n){
	return mergeSort(arr, 0, n-1);
}
