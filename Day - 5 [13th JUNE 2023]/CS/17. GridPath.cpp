//PL : https://www.codingninjas.com/codestudio/problems/1081470?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	int N = m+n-2;
	int r = m-1;
	double res = 1;
	for(int i = 1; i<=r; i++)
	{
		res = res*(N-r+i)/i; 
	}
	return (int) res;
}
