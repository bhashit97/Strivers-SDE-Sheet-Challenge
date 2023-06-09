//PL : https://www.codingninjas.com/codestudio/problems/842495?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// hashing 
	unordered_map<int, int> mpp;
	for(int i = 0; i<n; i++)
	{
		mpp[arr[i]]++;
	}
	for(auto i = mpp.begin(); i!=mpp.end(); i++)
	{
		if(i->second>n/2)
		return i->first;
	}

	return -1;
}
