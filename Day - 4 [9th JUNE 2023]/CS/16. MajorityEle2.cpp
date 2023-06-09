//PL : https://www.codingninjas.com/codestudio/problems/893027?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{

    int n = arr.size();

    unordered_map<int, int> mpp;
	for(int i = 0; i<n; i++)
	{
		mpp[arr[i]]++;
	}
    vector<int> temp;
	for(auto i = mpp.begin(); i!=mpp.end(); i++)
	{
		if(i->second>n/3)
		temp.push_back(i->first);
	}

    return temp;

}
