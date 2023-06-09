//PL : https://www.codingninjas.com/codestudio/problems/1082146?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	//using fast exponent to cal the ans
	long ans = 1;
	long xx = x;
	while(n>0)
	{
		if(n%2)
		{
			ans=((ans)%m*(xx)%m)%m;
			 
		}
		xx=((xx)%m*(xx)%m)%m;
		n = n/2;	
		
	}
	return (int)ans%m;

}
