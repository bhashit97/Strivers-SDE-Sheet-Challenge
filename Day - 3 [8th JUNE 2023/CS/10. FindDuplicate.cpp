//PL: https://www.codingninjas.com/codestudio/problems/1112602?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	int slow = arr[0], fast = arr[0];
	do
	{
		slow = arr[slow];
		fast = arr[arr[fast]];
	}while(slow!=fast);

	fast = arr[0];

	while(fast!=slow)
	{
		slow = arr[slow];
		fast = arr[fast];		
	}

	return fast;
}
