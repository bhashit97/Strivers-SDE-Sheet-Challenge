//PL: https://www.codingninjas.com/codestudio/problems/1214628?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
	int i=m-1, j=n-1;
	int temp = m+n-1;
	while(i>=0&&j>=0)
	{
		if(arr1[i]>arr2[j])
		{
			arr1[temp] = arr1[i];
			i--;
		}
		else
		{
			arr1[temp] = arr2[j];
			j--;
		}
		temp--;
	}
	
	while(j>=0)
	{
		arr1[temp] = arr2[j];
		j--;
		temp--;
	}

	return arr1;
}

