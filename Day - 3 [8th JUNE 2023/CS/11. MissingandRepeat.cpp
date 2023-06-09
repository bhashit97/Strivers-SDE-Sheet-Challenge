//PL : https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int freq[n+1] = {0};
	for(int i = 0; i<n; i++)
	{
		freq[arr[i]]++;
	}
	int missing = -1;
	int repeating = -1;

	for(int i = 1; i<=n; i++)
	{
		if(freq[i]==0)
		missing = i;
		else if(freq[i]==2)
		repeating = i;

		if(missing!=-1&&repeating!=-1)
		break;
	}

	return {missing,repeating};
	
}
