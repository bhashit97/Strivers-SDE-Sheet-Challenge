//PL  : https://www.codingninjas.com/codestudio/problems/893028?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	//unique triplet;
	sort(arr.begin(),arr.end());
	vector<vector<int>> res;
	for(int i = 0; i<n; i++)
	{
		if(i>0&&arr[i]==arr[i-1])
		continue;

		int j = i+1;
		int l = n-1;
		while(j<l)
		{
			long long int sum = arr[i];
			sum += arr[j];
			sum += arr[l];

			if(sum==K)
			{
				res.push_back({arr[i],arr[j],arr[l]});
				j++;
				l--;
				while(j<l&&arr[j]==arr[j-1]) j++;
				while(j<l&&arr[l]==arr[l+1]) l--;

			}
			else if(sum>K)
			{
				l--;
			}
			else
			{
				j++;
			}
		}
		
	}

	return res;
}
